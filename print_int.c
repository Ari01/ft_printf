/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 08:02:11 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 17:48:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_strnew(char c, size_t len)
{
	char    *zero;
	size_t  i;

	zero = malloc(sizeof(*zero) * (len + 1));
	if (!zero)
		return (NULL);
	i = 0;
	while (i < len)
	{
		zero[i] = c;
		i++;
	}
	zero[i] = 0;
	return (zero);
}

size_t	get_nzeros(t_spec spec, char *arg)
{
	int nblen;

	nblen = ft_strlen(arg);
	if (spec.zero > 0 && spec.width > nblen)
		return (spec.width - nblen);
	if (spec.precision > nblen)
		return (spec.precision - nblen);
	return (0);
}

size_t	get_nspaces(t_spec spec, char *arg, int nzero)
{
	int nblen;

	nblen = ft_strlen(arg);
	if (spec.width > nblen && spec.width > nzero)
		return (spec.width - nblen - nzero);
	return (0);
}

void	freeptrs(char *s, char *zero, char *space)
{
	free (s);
	free (zero);
	free (space);
	s = NULL;
	zero = NULL;
	space = NULL;
}

#include <stdio.h>
int		print_int(t_spec spec, char *arg)
{
	char    *zero;
	char    *space;
	int		nzero;
	int		nspace;
	int		arglen;

	zero = NULL;
	space = NULL;
	if (!arg)
		return 0;
	arglen = ft_strlen(arg);
	nzero = get_nzeros(spec, arg);
	nspace = get_nspaces(spec, arg, nzero);
	zero = ft_strnew('0', nzero);
	space = ft_strnew(' ', nspace);
	if (!zero || !space)
		return 0;
	if (spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	ft_putstr_fd(zero, STDOUT_FILENO);
	if (arg || spec.precision)
		ft_putstr_fd(arg, STDOUT_FILENO);
	if (spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	freeptrs(arg, zero, space);
	return (nspace + nzero + arglen);
}
