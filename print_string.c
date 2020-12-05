/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 13:57:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_nspace(t_spec spec, int len)
{
	if (spec.width > len)
		return (spec.width - len);
	return (0);
}

int			print_string(t_spec spec, const char *s)
{
	int		len;
	int		nspace;
	int		nzero;
	char	*space;
	char	*zero;

	space = NULL;
	zero = NULL;
	if (!s)
		s = ft_strdup("(null)");
	if (spec.precision >= 0 && spec.precision <= (int)ft_strlen(s))
		len = spec.precision;
	else
		len = ft_strlen(s);
	nspace = get_nspace(spec, len);
	if (nspace && spec.zero < 0)
	{
		space = ft_strnew(' ', nspace);
		if (!space)
			return (0);
	}
	nzero = 0;
	if (spec.zero > 0 && spec.width > len)
	{
		zero  = ft_strnew('0', spec.width - len);
		if (!zero)
			return (0);
		nzero += spec.width - len;
	}
	if (space && spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	if (zero)
		ft_putstr_fd(zero, STDOUT_FILENO);
	strlprint(s, len);
	if (space && spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	free(space);
	space = NULL;
	return (len + nspace + nzero);
}
