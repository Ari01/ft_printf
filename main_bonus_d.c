/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 09:59:03 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 09:59:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int main(void)
{
	printf("\n---------------------  test positive d -------------------\n");
	printf("flags + #\n");
	int man, ft;

	printf("|   + - #  5d|, 42\n");
	man = printf("%   + - #  5d\n", 42);
	ft = ft_printf("%   + - #  5d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5d|, 42\n");
	man = printf("%   + - #  -5d\n", 42);
	ft = ft_printf("%   + - #  -5d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.d|, 42\n");
	man = printf("%   + - #  5.d\n", 42);
	ft = ft_printf("%   + - #  5.d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2d|, 42\n");
	man = printf("%   + - #  5.2d\n", 42);
	ft = ft_printf("%   + - #  5.2d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7d|, 42\n");
	man = printf("%   + - #  5.7d\n", 42);
	ft = ft_printf("%   + - #  5.7d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*d|, -10, 42\n");
	man = printf("%   + - #  5.*d\n", -10, 42);
	ft = ft_printf("%   + - #  5.*d\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*d|, 2, 42\n");
	man = printf("%   + - #  5.*d\n", 2, 42);
	ft = ft_printf("%   + - #  5.*d\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*d|, 5, 42\n");
	man = printf("%   + - #  5.*d\n", 5, 42);
	ft = ft_printf("%   + - #  5.*d\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 5, 2, 42\n");
	man = printf("%   + - #  *.*d\n", 5, 2, 42);
	ft = ft_printf("%   + - #  *.*d\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, 2, 42\n");
	man = printf("%   + - #  *.*d\n", -5, 2, 42);
	ft = ft_printf("%   + - #  *.*d\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, -2, 42\n");
	man = printf("%   + - #  *.*d\n", -5, -2, 42);
	ft = ft_printf("%   + - #  *.*d\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 0, 0, 42\n");
	man = printf("%   + - #  *.*d\n", 0, 0, 42);
	ft = ft_printf("%   + - #  *.*d\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 5, 0, 42\n");
	man = printf("%   + - #  *.*d\n", 5, 0, 42);
	ft = ft_printf("%   + - #  *.*d\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, 0, 42\n");
	man = printf("%   + - #  *.*d\n", -5, 0, 42);
	ft = ft_printf("%   + - #  *.*d\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 0, -5, 42\n");
	man = printf("%   + - #  *.*d\n", 0, -5, 42);
	ft = ft_printf("%   + - #  *.*d\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -001, -001, 42\n");
	man = printf("%   + - #  *.*d\n", -001, -001, 42);
	ft = ft_printf("%   + - #  *.*d\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -00, -00, 42\n");
	man = printf("%   + - #  *.*d\n", -00, -00, 42);
	ft = ft_printf("%   + - #  *.*d\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, +00, +00, 42\n");
	man = printf("%   + - #  *.*d\n", +00, +00, 42);
	ft = ft_printf("%   + - #  *.*d\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5d|, 42\n");
	man = printf("%   - #  5d\n", 42);
	ft = ft_printf("%   - #  5d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5d|, 42\n");
	man = printf("%   - #  -5d\n", 42);
	ft = ft_printf("%   - #  -5d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.d|, 42\n");
	man = printf("%   - #  5.d\n", 42);
	ft = ft_printf("%   - #  5.d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2d|, 42\n");
	man = printf("%   - #  5.2d\n", 42);
	ft = ft_printf("%   - #  5.2d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7d|, 42\n");
	man = printf("%   - #  5.7d\n", 42);
	ft = ft_printf("%   - #  5.7d\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*d|, -10, 42\n");
	man = printf("%   - #  5.*d\n", -10, 42);
	ft = ft_printf("%   - #  5.*d\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*d|, 2, 42\n");
	man = printf("%   - #  5.*d\n", 2, 42);
	ft = ft_printf("%   - #  5.*d\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*d|, 5, 42\n");
	man = printf("%   - #  5.*d\n", 5, 42);
	ft = ft_printf("%   - #  5.*d\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 5, 2, 42\n");
	man = printf("%   - #  *.*d\n", 5, 2, 42);
	ft = ft_printf("%   - #  *.*d\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, 2, 42\n");
	man = printf("%   - #  *.*d\n", -5, 2, 42);
	ft = ft_printf("%   - #  *.*d\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, -2, 42\n");
	man = printf("%   - #  *.*d\n", -5, -2, 42);
	ft = ft_printf("%   - #  *.*d\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 0, 0, 42\n");
	man = printf("%   - #  *.*d\n", 0, 0, 42);
	ft = ft_printf("%   - #  *.*d\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 5, 0, 42\n");
	man = printf("%   - #  *.*d\n", 5, 0, 42);
	ft = ft_printf("%   - #  *.*d\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, 0, 42\n");
	man = printf("%   - #  *.*d\n", -5, 0, 42);
	ft = ft_printf("%   - #  *.*d\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 0, -5, 42\n");
	man = printf("%   - #  *.*d\n", 0, -5, 42);
	ft = ft_printf("%   - #  *.*d\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -001, -001, 42\n");
	man = printf("%   - #  *.*d\n", -001, -001, 42);
	ft = ft_printf("%   - #  *.*d\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -00, -00, 42\n");
	man = printf("%   - #  *.*d\n", -00, -00, 42);
	ft = ft_printf("%   - #  *.*d\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, +00, +00, 42\n");
	man = printf("%   - #  *.*d\n", +00, +00, 42);
	ft = ft_printf("%   - #  *.*d\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);


	printf("\n---------------------  test neg d -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5d|, -42\n");
	man = printf("%   + - #  5d\n", -42);
	ft = ft_printf("%   + - #  5d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5d|, -42\n");
	man = printf("%   + - #  -5d\n", -42);
	ft = ft_printf("%   + - #  -5d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.d|, -42\n");
	man = printf("%   + - #  5.d\n", -42);
	ft = ft_printf("%   + - #  5.d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2d|, -42\n");
	man = printf("%   + - #  5.2d\n", -42);
	ft = ft_printf("%   + - #  5.2d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7d|, -42\n");
	man = printf("%   + - #  5.7d\n", -42);
	ft = ft_printf("%   + - #  5.7d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*d|, -10, -42\n");
	man = printf("%   + - #  5.*d\n", -10, -42);
	ft = ft_printf("%   + - #  5.*d\n", -10, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*d|, 2, -42\n");
	man = printf("%   + - #  5.*d\n", 2, -42);
	ft = ft_printf("%   + - #  5.*d\n", 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*d|, 5, -42\n");
	man = printf("%   + - #  5.*d\n", 5, -42);
	ft = ft_printf("%   + - #  5.*d\n", 5, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 5, 2, -42\n");
	man = printf("%   + - #  *.*d\n", 5, 2, -42);
	ft = ft_printf("%   + - #  *.*d\n", 5, 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, 2, -42\n");
	man = printf("%   + - #  *.*d\n", -5, 2, -42);
	ft = ft_printf("%   + - #  *.*d\n", -5, 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, -2, -42\n");
	man = printf("%   + - #  *.*d\n", -5, -2, -42);
	ft = ft_printf("%   + - #  *.*d\n", -5, -2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 0, 0, -42\n");
	man = printf("%   + - #  *.*d\n", 0, 0, -42);
	ft = ft_printf("%   + - #  *.*d\n", 0, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 5, 0, -42\n");
	man = printf("%   + - #  *.*d\n", 5, 0, -42);
	ft = ft_printf("%   + - #  *.*d\n", 5, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -5, 0, -42\n");
	man = printf("%   + - #  *.*d\n", -5, 0, -42);
	ft = ft_printf("%   + - #  *.*d\n", -5, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, 0, -5, -42\n");
	man = printf("%   + - #  *.*d\n", 0, -5, -42);
	ft = ft_printf("%   + - #  *.*d\n", 0, -5, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -001, -001, -42\n");
	man = printf("%   + - #  *.*d\n", -001, -001, -42);
	ft = ft_printf("%   + - #  *.*d\n", -001, -001, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, -00, -00, -42\n");
	man = printf("%   + - #  *.*d\n", -00, -00, -42);
	ft = ft_printf("%   + - #  *.*d\n", -00, -00, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*d|, +00, +00, -42\n");
	man = printf("%   + - #  *.*d\n", +00, +00, -42);
	ft = ft_printf("%   + - #  *.*d\n", +00, +00, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5d|, -42\n");
	man = printf("%   - #  5d\n", -42);
	ft = ft_printf("%   - #  5d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5d|, -42\n");
	man = printf("%   - #  -5d\n", -42);
	ft = ft_printf("%   - #  -5d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.d|, -42\n");
	man = printf("%   - #  5.d\n", -42);
	ft = ft_printf("%   - #  5.d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2d|, -42\n");
	man = printf("%   - #  5.2d\n", -42);
	ft = ft_printf("%   - #  5.2d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7d|, -42\n");
	man = printf("%   - #  5.7d\n", -42);
	ft = ft_printf("%   - #  5.7d\n", -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*d|, -10, -42\n");
	man = printf("%   - #  5.*d\n", -10, -42);
	ft = ft_printf("%   - #  5.*d\n", -10, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*d|, 2, -42\n");
	man = printf("%   - #  5.*d\n", 2, -42);
	ft = ft_printf("%   - #  5.*d\n", 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*d|, 5, -42\n");
	man = printf("%   - #  5.*d\n", 5, -42);
	ft = ft_printf("%   - #  5.*d\n", 5, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 5, 2, -42\n");
	man = printf("%   - #  *.*d\n", 5, 2, -42);
	ft = ft_printf("%   - #  *.*d\n", 5, 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, 2, -42\n");
	man = printf("%   - #  *.*d\n", -5, 2, -42);
	ft = ft_printf("%   - #  *.*d\n", -5, 2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, -2, -42\n");
	man = printf("%   - #  *.*d\n", -5, -2, -42);
	ft = ft_printf("%   - #  *.*d\n", -5, -2, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 0, 0, -42\n");
	man = printf("%   - #  *.*d\n", 0, 0, -42);
	ft = ft_printf("%   - #  *.*d\n", 0, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 5, 0, -42\n");
	man = printf("%   - #  *.*d\n", 5, 0, -42);
	ft = ft_printf("%   - #  *.*d\n", 5, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -5, 0, -42\n");
	man = printf("%   - #  *.*d\n", -5, 0, -42);
	ft = ft_printf("%   - #  *.*d\n", -5, 0, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, 0, -5, -42\n");
	man = printf("%   - #  *.*d\n", 0, -5, -42);
	ft = ft_printf("%   - #  *.*d\n", 0, -5, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -001, -001, -42\n");
	man = printf("%   - #  *.*d\n", -001, -001, -42);
	ft = ft_printf("%   - #  *.*d\n", -001, -001, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, -00, -00, -42\n");
	man = printf("%   - #  *.*d\n", -00, -00, -42);
	ft = ft_printf("%   - #  *.*d\n", -00, -00, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*d|, +00, +00, -42\n");
	man = printf("%   - #  *.*d\n", +00, +00, -42);
	ft = ft_printf("%   - #  *.*d\n", +00, +00, -42);
	printf("man = %d, ft = %d\n\n", man, ft);

	return (0);
}
