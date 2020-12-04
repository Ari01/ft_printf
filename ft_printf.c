/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 08:29:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 06:45:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	strlprint(const char *s, size_t len)
{
	return (write(STDOUT_FILENO, s, len));
}

ssize_t	print_arg(const char **s, va_list ap)
{
	t_spec spec;

	spec = parse_specs(s, ap);
	if (spec.specifier == 'd' || spec.specifier == 'i')
        return (print_int(spec, ft_itoa(va_arg(ap, int))));
	if (spec.specifier == 'u')
		return (print_int(spec, convert_u(va_arg(ap, unsigned int))));
	if (spec.specifier == 'x')
		return (print_int(spec, convert_base(va_arg(ap, unsigned int), "0123456789abcdef")));
	if (spec.specifier == 'X')
		return (print_int(spec, convert_base(va_arg(ap, unsigned int), "0123456789ABCDEF")));
	if (spec.specifier == '%')
		return (print_int(spec, "%"));
	if (spec.specifier == 'c')
		return (print_char(spec, va_arg(ap, unsigned char)));
	if (spec.specifier == 's')
		return (print_string(spec, va_arg(ap, const char *)));
	if (spec.specifier == 'p')
		return (print_adress(spec, va_arg(ap, void *)));
	return (0);
}

int		ft_printf(const char *s, ...) __attribute__((format(printf, 1, 2)));

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
		nbytes_written += strlprint(s, tmp - s);
		s = tmp;
		if (*s == '%')
		{
			s++;
			nbytes_written += print_arg(&s, ap);
		}
	}
	va_end(ap);
	return (nbytes_written);
}
