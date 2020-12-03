/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:26:25 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 14:09:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int		ft_printf(const char *s, ...)
		__attribute__((format(printf, 1, 2)));

int main(void)
{
	printf("\n-------------------- FLAGS ------------------------\n");
	printf("%0.5d\n", 42);
	ft_printf("%0.5d\n\n", 42);

	printf("%010.5d\n", 42);
	ft_printf("%010.5d\n\n", 42);

	printf("%-10.5d\n", 42);
	ft_printf("%-10.5d\n\n", 42);

	printf("%000010.5d\n", 42);
	ft_printf("%000010.5d\n\n", 42);

	printf("%----10.5d\n", 42);
	ft_printf("%----10.5d\n\n", 42);

	printf("%05d\n", 42);
	ft_printf("%05d\n\n", 42);

	printf("%0d\n", 42);
	ft_printf("%0d\n\n", 42);

	printf("%0.5i\n", 42);
	ft_printf("%0.5i\n\n", 42);

	printf("%010.5i\n", 42);
	ft_printf("%010.5i\n\n", 42);

	printf("%-10.5i\n", 42);
	ft_printf("%-10.5i\n\n", 42);

	printf("%000010.5i\n", 42);
	ft_printf("%000010.5i\n\n", 42);

	printf("%----10.5i\n", 42);
	ft_printf("%----10.5i\n\n", 42);

	printf("%05i\n", 42);
	ft_printf("%05i\n\n", 42);

	printf("%0i\n", 42);
	ft_printf("%0i\n\n", 42);

	printf("\n-------------------- FIELD WIDTH ------------------------\n");

	printf("%5d\n", 42);
	ft_printf("%5d\n\n", 42);

	printf("%*d\n", 5, 42);
	ft_printf("%*d\n\n", 5, 42);

	printf("%*d\n", -5, 42);
	ft_printf("%*d\n\n", -5, 42);

	printf("%*.5d\n", -5, 42);
	ft_printf("%*.5d\n\n", -5, 42);

	printf("%*.d\n", 5, 42);
	ft_printf("%*.d\n\n", 5, 42);

	printf("\n-------------------- PRECISION ------------------------\n");
	
	printf("%*.*d\n", 5, 3, 42);
	ft_printf("%*.*d\n\n", 5, 3, 42);

	printf("%*.*d\n", 5, -3, 42);
	ft_printf("%*.*d\n\n", 5, -3, 42);

	printf("%*.*d\n", -5, -3, 42);
	ft_printf("%*.*d\n\n", -5, -3, 42);

	printf("\n------------------ PRINT TEST --------------------------\n");
	printf("%u\n", 42);
	ft_printf("%u\n", 42);

	printf("%u\n", +0);
	ft_printf("%u\n", +0);

	printf("%u\n", -65536);
	ft_printf("%u\n", -65536);

	printf("%u\n", 2147483647);
	ft_printf("%u\n", 2147483647);

	return (0);
}
