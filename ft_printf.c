/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 08:29:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/02 07:04:37 by user42           ###   ########.fr       */
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
	printf("spec.minus = %d\n", spec.minus);
	printf("spec.zero = %d\n", spec.zero);
	printf("spec.width = %d\n", spec.width);
	printf("spec.precision = %d\n", spec.precision);
	printf("spec.specifier = %d\n", spec.specifier);
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
		print_string(tmp, tmp - s);
		s = tmp;
		if (*s == '%')
		{
			if (*(s + 1) == '%')
			{
				write(STDOUT_FILENO, "%", 1);
				s++;
			}
			if (*s == '%')
				print_arg(&s, ap);
		}
	}
	va_end(ap);
	return (nbytes_written);
}
