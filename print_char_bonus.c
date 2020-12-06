/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 06:34:06 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 12:06:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int			print_all(t_spec spec, char *space, char *zero, unsigned char c)
{
	int nbytes_written;

	nbytes_written = 0;
	if (space && spec.minus < 0)
		nbytes_written += strlprint(ft_strlen(space));
	if (zero)
		nbytes_written += strlprint(ft_strlen(zero));
	ft_putchar_fd(c, STDOUT_FILENO);
	nbytes_written++;
	if (space && spec.minus > 0)
		nbytes_written += strlprint(ft_strlen((space)));
	return (nbytes_written);
}

static void	freeptrs(char *space, char *zero)
{
	free(space);
	free(zero);
	space = NULL;
	zero = NULL;
}

int			print_char(t_spec spec, unsigned char c)
{
	char	*space;
	char	*zero;
	int		nbytes_written;

	space = NULL;
	zero = NULL;
	if (spec.width > 1)
	{
		if (spec.zero > 0)
		{
			zero = ft_strnew('0', spec.width - 1);
			if (!zero)
				return (0);
		}
		else
		{
			space = ft_strnew(' ', spec.width - 1);
			if (!space)
				return (0);
		}
	}
	nbytes_written = print_all(spec, space, zero, c);
	freeptrs(space, zero);
	return (nbytes_written);
}
