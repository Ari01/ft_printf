/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 13:42:05 by user42           ###   ########.fr       */
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
	if (spec.zero > 0)
		return (spec.width - slen - 2);
	if (spec.precision > 0)
		return (spec.precision - slen);
	return (nzero);
}

char		*set_prefix_zero(t_spec spec, char *s)
{
	char	*freeptr;
	char	*tmp;
	char	*zero;
	char	*res;
	int		nzero;

	nzero = get_nzero(spec, s);
	res = ft_strdup("0x");
	freeptr = res;
	if (ft_atoi(s) || spec.precision)
	{
		if (nzero > 0)
		{
			if (!(zero = ft_strnew('0', nzero)))
				return (NULL);
			if (!(tmp = ft_strjoin(res, zero)))
				return (NULL);
			if (!(res = ft_strjoin(tmp, s)))
				return (NULL);
			freeptrs(tmp, zero);
		}
		else
			res = ft_strjoin(res, s);
		free(freeptr);
	}
	return (res);
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
	s = set_prefix_zero(spec, convert_base((unsigned long int)(adr), "0123456789abcdef"));	
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
