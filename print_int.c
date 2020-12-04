/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 08:02:11 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 12:23:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_nzeros(t_spec spec, char *arg)
{
	int nblen;

	nblen = ft_strlen(arg);
	if (spec.zero > 0 && spec.width > nblen)
		return (spec.width - nblen);
	if (*arg == '-')
		nblen--;
	if (spec.precision > nblen)
		return (spec.precision - nblen);
	return (0);
}

size_t			get_nspaces(t_spec spec, char *arg, int nzero)
{
	int nblen;

	nblen = ft_strlen(arg);
	if (!ft_atoi(arg) && !spec.precision)
		nblen--;
	if (spec.width > nzero + nblen)
		return (spec.width - nblen - nzero);
	return (0);
}

int				get_zero_space(t_spec spec, char **zero, char **space, char *arg)
{
	int	nzero;
	int	nspace;

	nzero = get_nzeros(spec, arg);
	nspace = get_nspaces(spec, arg, nzero);
	*zero = ft_strnew('0', nzero);
	*space = ft_strnew(' ', nspace);
	return (nzero + nspace + ft_strlen(arg));
}

void			freeptrs(char *s, char *zero, char *space)
{
	free (s);
	free (zero);
	free (space);
	s = NULL;
	zero = NULL;
	space = NULL;
}

#include <stdio.h>
int				print_int(t_spec spec, char *arg)
{
	char    *zero;
	char    *space;
	char	*free;
	int		arglen;
	int		res;

	free = arg;
	res = get_zero_space(spec, &zero, &space, arg);
	if (!arg || !zero || !space)
		return 0;
	arglen = ft_strlen(arg);
	if (spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	if (*arg == '-')
	{
		ft_putchar_fd('-', STDOUT_FILENO);
		arg++;
	}
	ft_putstr_fd(zero, STDOUT_FILENO);
	if (ft_atoi(arg) || spec.precision)
		ft_putstr_fd(arg, STDOUT_FILENO);
	if (spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	freeptrs(free, zero, space);
	return (res);
}
