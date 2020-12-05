/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 12:02:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		freeptrs(char *s, char *space)
{
	free(space);
	free(s);
	space = NULL;
	s = NULL;
}

int			get_nzero(t_spec spec, char *s)
{
	int nzero;
	int slen;

	nzero = 0;
	slen = ft_strlen(s);
	if (spec.zero > 0 || spec.precision > 0)
	{
		if (spec.precision > spec.width)
			nzero = spec.precision - slen;
		else
			nzero = spec.width - slen;
	}
	return (nzero);
}

char		*set_prefix_zero(t_spec spec, unsigned long int adr)
{
	char	*freeptr;
	char	*tmp;
	char	*zero;
	char	*s;
	int		nzero;

	s = convert_base(adr, "0123456789abcdef");
	freeptr = s;
	nzero = get_nzero(spec, s);
	if (nzero > 0)
	{
		if (!(zero = ft_strnew('0', nzero)))
			return (NULL);
		if (!(tmp = ft_strjoin("0x", zero)))
			return (NULL);
		if (!(s = ft_strjoin(tmp, s)))
			return (NULL);
		free(tmp);
		free(zero);
	}
	else
		s = ft_strjoin("0x", s);
	free(freeptr);
	return (s);
}

static int	print_all(t_spec spec, char *s, char *space)
{
	int		nbytes_written;

	nbytes_written = 0;
	if (space && spec.minus < 0)
		nbytes_written += strlprint(space, ft_strlen(space));
	nbytes_written += strlprint(s, ft_strlen(s));
	if (space && spec.minus > 0)
		nbytes_written += strlprint(space, ft_strlen(space));
	freeptrs(s, space);
	return (nbytes_written);
}

int			print_adress(t_spec spec, void *adr)
{
	char	*s;
	char	*space;
	int		nbytes_written;
	int		slen;

	space = NULL;
	s = set_prefix_zero(spec, (unsigned long int)(adr));	
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (spec.width > slen && spec.zero < 0)
	{
		space = ft_strnew(' ', spec.width - slen);
		if (!space)
			return (0);
	}
	nbytes_written = print_all(spec, s, space);
	return (nbytes_written);
}
