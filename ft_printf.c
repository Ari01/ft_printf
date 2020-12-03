/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 08:29:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 14:13:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

#include <stdio.h>
ssize_t	print_string(const char *s, size_t len)
{
	return (write(STDOUT_FILENO, s, len));
}

ssize_t	print_arg(const char **s, va_list ap)
{
	t_spec spec;

	spec = parse_specs(s, ap);
	if (spec.specifier == 'd' || spec.specifier == 'i')
        print_int(spec, ft_itoa(va_arg(ap, int)));
	if (spec.specifier == 'u')
		print_int(spec, convert_u(va_arg(ap, unsigned int)));
/*	if (spec.specifier == 'x')
		print_int(spec, va_arg(ap, unsigned int));
	if (spec.specifier == 'X')
		print_int(spec, va_arg(ap, unsigned int));*/
	return (0);
}

int		ft_printf(const char *s, ...)
{
	va_list		ap;
	const char	*tmp;
	int			nbytes_written;

	va_start(ap, s);
	nbytes_written = 0;
	while (*s)
	{
		tmp = s;
		while (*tmp && *tmp != '%')
			tmp++;
		print_string(s, tmp - s);
		s = tmp;
		if (*s == '%')
		{
			s++;
			if (*s == '%')
			{
				write(STDOUT_FILENO, "%", 1);
				s++;
			}
			else
				print_arg(&s, ap);
		}
	}
	va_end(ap);
	return (nbytes_written);
}
