/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 08:29:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 11:53:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int		ft_is_directive(const char c)
{
	return (c == '%');
}

int		ft_is_specifier(const char c, const char *specifier_set)
{
	while (*specifier_set)
	{
		if (c == *specifier_set)
			return (1);
		specifier_set++;
	}
	return (0);
}

#include <stdio.h>
ssize_t	print_string(const char *s, int start, int end)
{
	printf("end - start = %d\n", end - start);
	return (write(STDOUT_FILENO, &s[start], end - start));
}

ssize_t	print_arg(const char *s, const char *specifier_set, int *end)
{
	while (!ft_is_specifier(s[*end], specifier_set))
		*end += 1;
	return (0);
}

int		ft_printf(const char *s, ...)
{
	va_list ap;
	int		start;
	int		end;
	int		nbytes_written;

	va_start(ap, s);
	nbytes_written = 0;
	end = 0;
	while (s[end])
	{
		start = end;
		while (s[end] && s[end] != '%')
			end++;
		if (s[end] == '%')
		{
			if (s[end + 1] != '%')
			{
				nbytes_written += print_arg(s, "cspdiuxX", &end);
				end++;
			}
			else
			{
				end++;
				nbytes_written += print_string(s, start, end);
				printf("end in = %d\n", end);
			}
		}
		else
		{
			printf("end out = %d\n", end);
			nbytes_written += print_string(s, start, end);
		}
	}
	va_end(ap);
	return (nbytes_written);
}
