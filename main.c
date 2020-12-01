/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:26:25 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 10:38:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int		ft_printf(const char *s, ...)
		__attribute__((format(printf, 1, 2)));

int main(void)
{
	printf("\n-------------------- FLAGS ------------------------\n");

	printf("%0d\n", 42);
	ft_printf("%0d\n", 42);
/*
	printf("%0d\n", 42);
	ft_printf("%0d\n", 42);

	printf("%00000d\n", 42);
	ft_printf("%00000d\n", 42);

	printf("%-----d\n", 42);
	ft_printf("%-----d\n", 42);

	printf("%-d\n", 42);
	ft_printf("%-d\n", 42);

	printf("%0d\n", 42);
	ft_printf("%0d\n", 42);

		// errors
		// printf("%0-d\n", 42);

	// field width
	printf("\n-------------------- FIELD WIDTH ------------------------\n");
	printf("%5d\n", 42);
	ft_printf("%5d\n", 42);

	printf("%005d\n", 42);
	ft_printf("%005d\n", 42);
	
	printf("%-5d\n", 42);
	ft_printf("%-5d\n", 42);

	printf("%10d\n", 42);
	ft_printf("%10d\n", 42);

		// errors
		// printf("")

	printf("\n-------------------- PRECISION ------------------------\n");
	printf("%.d\n", 42);
	ft_printf("%.d\n", 42);

	printf("%.5d\n", 42);
	ft_printf("%.5d\n", 42);

	printf("%.0d\n", 42);
	ft_printf("%.0d\n", 42);

	printf("%.05d\n", 42);
	ft_printf("%.05d\n", 42);

	printf("%05.2d\n", 42);
	printf("%-5.2d\n", 42);

	printf("%%%-10.10d\n", 42);
	printf("%%%-10.3d\n", 42);
	printf("%%%0.0d\n", 42);

		// errors
		// printf("%.-5d", 42);
		// printf("%0.5c", 'a');
		// printf("%0.5s", "il");*/
}
