/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:15:30 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 17:19:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_nb_len(unsigned long int n, size_t baselen)
{
	size_t len;

	len = 1;
	if (n < baselen)
		return (len);
	while ((n = n / baselen))
		len++;
	return (len);
}

char			*convert_base(unsigned long int n, char *base)
{
	int		baselen;
	size_t	nblen;
	char	*s;

	baselen = ft_strlen(base);
	nblen = get_nb_len(n, baselen);
	s = malloc(sizeof(*s) * (nblen + 1));
	if (!s)
		return (NULL);
	s[0] = '0';
	s[nblen] = 0;
	while (n)
	{
		s[--nblen] = base[n % baselen];
		n = n / baselen;
	}
	return (s);
}
