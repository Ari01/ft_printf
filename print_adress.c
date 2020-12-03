/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 17:31:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_adress(t_spec spec, void *adr)
{
	unsigned long int	n;
	int					nbytes_written;

	n = (unsigned long int)adr;
	nbytes_written = 0;
	if (n)
	{
		ft_putstr_fd("0x", STDOUT_FILENO);
		nbytes_written += 2;
	}
	nbytes_written += print_int(spec, convert_base(n, "0123456789abcdef"));
	return (nbytes_written);
}
