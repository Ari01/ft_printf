/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:08:37 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 09:09:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(char c, size_t len)
{
	char    *zero;

	zero = malloc(sizeof(*zero) * (len + 1));
	if (!zero)
		return (NULL);
	ft_memset(zero, c, len);
	zero[len] = 0;
	return (zero);
}
