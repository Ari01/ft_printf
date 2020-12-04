/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 07:21:30 by user42           ###   ########.fr       */
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
	size_t	len;
	int		nspace;
	char	*space;

	space = NULL;
	if (!s)
		return (0);
	if (spec.precision >= 0 && spec.precision <= (int)ft_strlen(s))
		len = spec.precision;
	else
		len = ft_strlen(s);
	nspace = get_nspace(spec, len);
	if (nspace)
	{
		space = ft_strnew(' ', nspace);
		if (!space)
			return (0);
	}
	if (space && spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	strlprint(s, len);
	if (space && spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	free(space);
	space = NULL;
	return (len + nspace);
}
