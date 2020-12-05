/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/05 14:16:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			get_slen(t_spec spec, const char *s)
{
	if (spec.precision >= 0 && spec.precision <= (int)ft_strlen(s))
		return (spec.precision);
	return (ft_strlen(s));
}

char		*get_space(t_spec spec, int slen)
{
	char *space;

	space = ft_strdup("");
	if (spec.zero < 0 && spec.width > slen)
	{
		space = ft_strnew(' ', spec.width - slen);
		if (!space)
			return (NULL);
	}
	return (space);
}

char		*get_zero(t_spec spec, int slen)
{
	char *zero;

	zero = ft_strdup("");
	if (spec.zero > 0 && spec.width > slen)
	{
		zero  = ft_strnew('0', spec.width - slen);
		if (!zero)
			return (NULL);
	}
	return (zero);
}

static void	freeptrs(char *space, char *zero)
{
	free(space);
	free(zero);
	space = NULL;
	zero = NULL;
}

int			print_string(t_spec spec, const char *s)
{
	int		slen;
	int		nbytes_written;
	char	*space;
	char	*zero;

	space = NULL;
	zero = NULL;
	if (!s)
		s = ft_strdup("(null)");
	slen = get_slen(spec, s);
	space = get_space(spec, slen);
	if (!space)
		return (0);
	zero = get_zero(spec, slen);
	if (!zero)
		return (0);
	if (space && spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	ft_putstr_fd(zero, STDOUT_FILENO);
	strlprint(s, slen);
	if (space && spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	nbytes_written = slen + ft_strlen(space) + ft_strlen(zero);
	freeptrs(space, zero);
	return (nbytes_written);
}
