/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 08:02:11 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 10:57:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	get_zero_space(t_spec spec, char **zero, char **space, char *arg)
{
	int	nzero;
	int	nspace;

	nzero = get_nzeros(spec, arg);
	nspace = get_nspaces(spec, arg, nzero);
	*zero = ft_strnew('0', nzero);
	*space = ft_strnew(' ', nspace);
	return (nzero + nspace);
}

int print_0x(t_spec spec, char *arg)
{
	char c;

	c = spec.specifier;
	if ((c == 'x' || c == 'X') && spec.hash > 0 && *arg != '0')
	{
		ft_putchar_fd('0', STDOUT_FILENO);
		ft_putchar_fd(c, STDOUT_FILENO);
		return (2);
	}
	return (0);
}

int	print_sign(t_spec spec, char **arg)
{
	char	c;

	c = 0;
	if (spec.specifier == 'd' || spec.specifier == 'i')
	{
		if (**arg == '-')
		{
			c = '-';
			*arg += 1;
		}
		else if (spec.plus > 0)
			c = '+';
		else if (spec.space > 0)
			c = ' ';
		if (c)
		{
			ft_putchar_fd(c, STDOUT_FILENO);
			return (1);
		}
		return (0);
	}
	return (print_0x(spec, *arg));
}

int				print_int(t_spec spec, char *arg)
{
	char	*zero;
	char	*space;
	char	*freeptr;
	int		res;

	freeptr = arg;
	res = get_zero_space(spec, &zero, &space, arg);
	if (!arg || !zero || !space)
		return (0);
	if (spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	res += print_sign(spec, &arg);
	ft_putstr_fd(zero, STDOUT_FILENO);
	if (*arg != '0' || spec.precision)
	{
		ft_putstr_fd(arg, STDOUT_FILENO);
		res += ft_strlen(arg);
	}
	if (spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	free(freeptr);
	free(zero);
	free(space);
	return (res);
}
