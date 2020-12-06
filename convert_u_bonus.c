/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:10:55 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 07:20:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static size_t	get_nb_len(unsigned int n)
{
	size_t len;

	len = 1;
	if (n < 10)
		return (len);
	while ((n = n / 10))
		len++;
	return (len);
}

char			*convert_u(unsigned int n)
{
	char			*s;
	int				i;
	size_t			len;

	i = 0;
	len = get_nb_len(n);
	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	s[0] = '0';
	s[len] = 0;
	while (n)
	{
		s[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (s);
}
