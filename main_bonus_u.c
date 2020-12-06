/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 10:01:28 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 10:01:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int main(void)
{
	printf("\n---------------------  test u -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5u|, 42\n");
	man = printf("%   + - #  5u\n", 42);
	ft = ft_printf("%   + - #  5u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5u|, 42\n");
	man = printf("%   + - #  -5u\n", 42);
	ft = ft_printf("%   + - #  -5u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.u|, 42\n");
	man = printf("%   + - #  5.u\n", 42);
	ft = ft_printf("%   + - #  5.u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2u|, 42\n");
	man = printf("%   + - #  5.2u\n", 42);
	ft = ft_printf("%   + - #  5.2u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7u|, 42\n");
	man = printf("%   + - #  5.7u\n", 42);
	ft = ft_printf("%   + - #  5.7u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*u|, -10, 42\n");
	man = printf("%   + - #  5.*u\n", -10, 42);
	ft = ft_printf("%   + - #  5.*u\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*u|, 2, 42\n");
	man = printf("%   + - #  5.*u\n", 2, 42);
	ft = ft_printf("%   + - #  5.*u\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*u|, 5, 42\n");
	man = printf("%   + - #  5.*u\n", 5, 42);
	ft = ft_printf("%   + - #  5.*u\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, 5, 2, 42\n");
	man = printf("%   + - #  *.*u\n", 5, 2, 42);
	ft = ft_printf("%   + - #  *.*u\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, -5, 2, 42\n");
	man = printf("%   + - #  *.*u\n", -5, 2, 42);
	ft = ft_printf("%   + - #  *.*u\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, -5, -2, 42\n");
	man = printf("%   + - #  *.*u\n", -5, -2, 42);
	ft = ft_printf("%   + - #  *.*u\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, 0, 0, 42\n");
	man = printf("%   + - #  *.*u\n", 0, 0, 42);
	ft = ft_printf("%   + - #  *.*u\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, 5, 0, 42\n");
	man = printf("%   + - #  *.*u\n", 5, 0, 42);
	ft = ft_printf("%   + - #  *.*u\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, -5, 0, 42\n");
	man = printf("%   + - #  *.*u\n", -5, 0, 42);
	ft = ft_printf("%   + - #  *.*u\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, 0, -5, 42\n");
	man = printf("%   + - #  *.*u\n", 0, -5, 42);
	ft = ft_printf("%   + - #  *.*u\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, -001, -001, 42\n");
	man = printf("%   + - #  *.*u\n", -001, -001, 42);
	ft = ft_printf("%   + - #  *.*u\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, -00, -00, 42\n");
	man = printf("%   + - #  *.*u\n", -00, -00, 42);
	ft = ft_printf("%   + - #  *.*u\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*u|, +00, +00, 42\n");
	man = printf("%   + - #  *.*u\n", +00, +00, 42);
	ft = ft_printf("%   + - #  *.*u\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5u|, 42\n");
	man = printf("%   - #  5u\n", 42);
	ft = ft_printf("%   - #  5u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5u|, 42\n");
	man = printf("%   - #  -5u\n", 42);
	ft = ft_printf("%   - #  -5u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.u|, 42\n");
	man = printf("%   - #  5.u\n", 42);
	ft = ft_printf("%   - #  5.u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2u|, 42\n");
	man = printf("%   - #  5.2u\n", 42);
	ft = ft_printf("%   - #  5.2u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7u|, 42\n");
	man = printf("%   - #  5.7u\n", 42);
	ft = ft_printf("%   - #  5.7u\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*u|, -10, 42\n");
	man = printf("%   - #  5.*u\n", -10, 42);
	ft = ft_printf("%   - #  5.*u\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*u|, 2, 42\n");
	man = printf("%   - #  5.*u\n", 2, 42);
	ft = ft_printf("%   - #  5.*u\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*u|, 5, 42\n");
	man = printf("%   - #  5.*u\n", 5, 42);
	ft = ft_printf("%   - #  5.*u\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, 5, 2, 42\n");
	man = printf("%   - #  *.*u\n", 5, 2, 42);
	ft = ft_printf("%   - #  *.*u\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, -5, 2, 42\n");
	man = printf("%   - #  *.*u\n", -5, 2, 42);
	ft = ft_printf("%   - #  *.*u\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, -5, -2, 42\n");
	man = printf("%   - #  *.*u\n", -5, -2, 42);
	ft = ft_printf("%   - #  *.*u\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, 0, 0, 42\n");
	man = printf("%   - #  *.*u\n", 0, 0, 42);
	ft = ft_printf("%   - #  *.*u\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, 5, 0, 42\n");
	man = printf("%   - #  *.*u\n", 5, 0, 42);
	ft = ft_printf("%   - #  *.*u\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, -5, 0, 42\n");
	man = printf("%   - #  *.*u\n", -5, 0, 42);
	ft = ft_printf("%   - #  *.*u\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, 0, -5, 42\n");
	man = printf("%   - #  *.*u\n", 0, -5, 42);
	ft = ft_printf("%   - #  *.*u\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, -001, -001, 42\n");
	man = printf("%   - #  *.*u\n", -001, -001, 42);
	ft = ft_printf("%   - #  *.*u\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, -00, -00, 42\n");
	man = printf("%   - #  *.*u\n", -00, -00, 42);
	ft = ft_printf("%   - #  *.*u\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*u|, +00, +00, 42\n");
	man = printf("%   - #  *.*u\n", +00, +00, 42);
	ft = ft_printf("%   - #  *.*u\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);
	
	return (0);
}
