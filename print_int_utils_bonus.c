/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 09:38:50 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 11:12:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

size_t	get_nzeros(t_spec spec, char *arg)
{
	int		nblen;
	char	c;

	c = spec.specifier;
	nblen = ft_strlen(arg);
	if ((c == 'd' || c == 'i') && (spec.plus > 0 || spec.space > 0))
		nblen++;
	if (spec.zero > 0 && spec.width > nblen)
		return (spec.width - nblen);
	if (*arg == '-')
		nblen--;
	if (spec.precision > nblen)
		return (spec.precision - nblen);
	return (0);
}

size_t	get_nspaces(t_spec spec, char *arg, int nzero)
{
	int		nblen;
	char	c;

	nblen = ft_strlen(arg);
	c = spec.specifier;
	if (c == 'd' || c == 'i')
	{
		if (*arg == '-')
			arg++;
		else if (spec.plus > 0 || spec.space > 0)
			nblen++;
	}
	if ((c == 'x' || c == 'X') && spec.hash > 0 && *arg != '0')
		nblen += 2;
	if ((*arg == '0' && !spec.precision))
		nblen--;
	if (spec.width > nzero + nblen)
		return (spec.width - nblen - nzero);
	return (0);
}
