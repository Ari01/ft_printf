/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 07:20:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_adress(t_spec spec, void *adr)
{
	unsigned long int	n;
	char				*s;
	char				*space;
	int					nspace;
	int					nbytes_written;

	nbytes_written = 0;
	nspace = 0;
	n = (unsigned long int)adr;
	s = convert_base(n, "0123456789abcdef");
	if (!s)
		return (0);
	ft_putstr_fd("0x", STDOUT_FILENO);
	nbytes_written += 2;
	if (spec.width > (int)ft_strlen(s))
	{
		nspace = spec.width - ft_strlen(s);
		space = ft_strnew(' ', nspace);
		if (!space)
			return (0);
	}
	if (nspace && spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	nbytes_written += print_int(spec, s);
	if (nspace && spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	return (nbytes_written + nspace);
}
