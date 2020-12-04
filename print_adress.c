/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:00:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 16:14:55 by user42           ###   ########.fr       */
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

int			print_adress(t_spec spec, void *adr)
{
	unsigned long int	n;
	char				*s;
	char				*space;
	int					nspace;
	int					slen;

	nspace = 0;
	space = NULL;
	n = (unsigned long int)adr;
	s = ft_strjoin("0x", convert_base(n, "0123456789abcdef"));
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (spec.width > slen)
	{
		nspace = spec.width - ft_strlen(s);
		space = ft_strnew(' ', nspace);
		if (!space)
			return (0);
	}
	if (space && spec.minus < 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	ft_putstr_fd(s, STDOUT_FILENO);
	if (space && spec.minus > 0)
		ft_putstr_fd(space, STDOUT_FILENO);
	freeptrs(s, space);
	return (slen + nspace);
}
