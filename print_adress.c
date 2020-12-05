/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 10:20:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	freeptrs(char *s, char *space)
{
	free(s);
	free(space);
	s = NULL;
	space = NULL;
}

int			set_space_zero(t_spec spec, char **space, char **zero, int slen)
{
	int size;

	size = spec.width - slen;
	if (size > 0)
	{
		if (spec.zero > 0)
		{
			*zero = ft_strnew('0', size);
			if (!*zero)
				return (0);
		}
		else
		{
			*space = ft_strnew(' ', size);
			if (!*space)
				return (0);
		}
	}
	return (1);
}

static int	print_all(t_spec spec, char *s, char *zero, char *space)
{
	int nbytes_written;

	nbytes_written = 0;
	if (space && spec.minus < 0)
		nbytes_written += strlprint(space, ft_strlen(space));
	if (zero)
		nbytes_written += strlprint(space, ft_strlen(zero));
	nbytes_written += strlprint(s, ft_strlen(s));
	if (space && spec.minus > 0)
		nbytes_written += strlprint(space, ft_strlen(space));
	return (nbytes_written);
}

int			print_adress(t_spec spec, void *adr)
{
	char				*s;
	char				*space;
	char				*zero;
	int					nbytes_written;
	int					slen;

	space = NULL;
	zero = NULL;
	s = ft_strjoin("0x", convert_base((unsigned long int)adr, "0123456789abcdef"));
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (!set_space_zero(spec, &space, &zero, slen))
		return (0);
	nbytes_written = print_all(spec, s, zero, space);
	freeptrs(s, space);
	return (nbytes_written);
}
