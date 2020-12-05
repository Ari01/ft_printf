/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 11:21:14 by user42           ###   ########.fr       */
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

char		*set_prefix_zero(t_spec spec, unsigned long int adr)
{
	char	*freeptr;
	char	*tmp;
	char	*zero;
	char	*s;
	int		size;

	s = convert_base(adr, "0123456789abcdef");
	freeptr = s;
	size = ft_strlen(s) + 2;
	if (spec.zero > 0 && spec.width > size)
	{
		if (!(zero = ft_strnew('0', spec.width - size)))
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
