/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 17:27:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_string(t_spec spec, const char *s)
{
	size_t len;

	if (spec.precision > 0 && spec.precision <= (int)ft_strlen(s))
		len = spec.precision;
	else
		len = ft_strlen(s);
	strlprint(s, len);
	return (len);
}
