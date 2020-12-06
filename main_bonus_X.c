/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:26:25 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 10:25:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int main(void)
{
	int man, ft;

	printf("\n---------------------  test X -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5X|, 42\n");
	man = printf("%   + - #  5X\n", 42);
	ft = ft_printf("%   + - #  5X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5X|, 42\n");
	man = printf("%   + - #  -5X\n", 42);
	ft = ft_printf("%   + - #  -5X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.X|, 42\n");
	man = printf("%   + - #  5.X\n", 42);
	ft = ft_printf("%   + - #  5.X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2X|, 42\n");
	man = printf("%   + - #  5.2X\n", 42);
	ft = ft_printf("%   + - #  5.2X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7X|, 42\n");
	man = printf("%   + - #  5.7X\n", 42);
	ft = ft_printf("%   + - #  5.7X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*X|, -10, 42\n");
	man = printf("%   + - #  5.*X\n", -10, 42);
	ft = ft_printf("%   + - #  5.*X\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*X|, 2, 42\n");
	man = printf("%   + - #  5.*X\n", 2, 42);
	ft = ft_printf("%   + - #  5.*X\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*X|, 5, 42\n");
	man = printf("%   + - #  5.*X\n", 5, 42);
	ft = ft_printf("%   + - #  5.*X\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 5, 2, 42\n");
	man = printf("%   + - #  *.*X\n", 5, 2, 42);
	ft = ft_printf("%   + - #  *.*X\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, 2, 42\n");
	man = printf("%   + - #  *.*X\n", -5, 2, 42);
	ft = ft_printf("%   + - #  *.*X\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, -2, 42\n");
	man = printf("%   + - #  *.*X\n", -5, -2, 42);
	ft = ft_printf("%   + - #  *.*X\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 0, 0, 42\n");
	man = printf("%   + - #  *.*X\n", 0, 0, 42);
	ft = ft_printf("%   + - #  *.*X\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 5, 0, 42\n");
	man = printf("%   + - #  *.*X\n", 5, 0, 42);
	ft = ft_printf("%   + - #  *.*X\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, 0, 42\n");
	man = printf("%   + - #  *.*X\n", -5, 0, 42);
	ft = ft_printf("%   + - #  *.*X\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 0, -5, 42\n");
	man = printf("%   + - #  *.*X\n", 0, -5, 42);
	ft = ft_printf("%   + - #  *.*X\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -001, -001, 42\n");
	man = printf("%   + - #  *.*X\n", -001, -001, 42);
	ft = ft_printf("%   + - #  *.*X\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -00, -00, 42\n");
	man = printf("%   + - #  *.*X\n", -00, -00, 42);
	ft = ft_printf("%   + - #  *.*X\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, +00, +00, 42\n");
	man = printf("%   + - #  *.*X\n", +00, +00, 42);
	ft = ft_printf("%   + - #  *.*X\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5X|, 42\n");
	man = printf("%   - #  5X\n", 42);
	ft = ft_printf("%   - #  5X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5X|, 42\n");
	man = printf("%   - #  -5X\n", 42);
	ft = ft_printf("%   - #  -5X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.X|, 42\n");
	man = printf("%   - #  5.X\n", 42);
	ft = ft_printf("%   - #  5.X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2X|, 42\n");
	man = printf("%   - #  5.2X\n", 42);
	ft = ft_printf("%   - #  5.2X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7X|, 42\n");
	man = printf("%   - #  5.7X\n", 42);
	ft = ft_printf("%   - #  5.7X\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*X|, -10, 42\n");
	man = printf("%   - #  5.*X\n", -10, 42);
	ft = ft_printf("%   - #  5.*X\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*X|, 2, 42\n");
	man = printf("%   - #  5.*X\n", 2, 42);
	ft = ft_printf("%   - #  5.*X\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*X|, 5, 42\n");
	man = printf("%   - #  5.*X\n", 5, 42);
	ft = ft_printf("%   - #  5.*X\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 5, 2, 42\n");
	man = printf("%   - #  *.*X\n", 5, 2, 42);
	ft = ft_printf("%   - #  *.*X\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, 2, 42\n");
	man = printf("%   - #  *.*X\n", -5, 2, 42);
	ft = ft_printf("%   - #  *.*X\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, -2, 42\n");
	man = printf("%   - #  *.*X\n", -5, -2, 42);
	ft = ft_printf("%   - #  *.*X\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 0, 0, 42\n");
	man = printf("%   - #  *.*X\n", 0, 0, 42);
	ft = ft_printf("%   - #  *.*X\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 5, 0, 42\n");
	man = printf("%   - #  *.*X\n", 5, 0, 42);
	ft = ft_printf("%   - #  *.*X\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, 0, 42\n");
	man = printf("%   - #  *.*X\n", -5, 0, 42);
	ft = ft_printf("%   - #  *.*X\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 0, -5, 42\n");
	man = printf("%   - #  *.*X\n", 0, -5, 42);
	ft = ft_printf("%   - #  *.*X\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -001, -001, 42\n");
	man = printf("%   - #  *.*X\n", -001, -001, 42);
	ft = ft_printf("%   - #  *.*X\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -00, -00, 42\n");
	man = printf("%   - #  *.*X\n", -00, -00, 42);
	ft = ft_printf("%   - #  *.*X\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, +00, +00, 42\n");
	man = printf("%   - #  *.*X\n", +00, +00, 42);
	ft = ft_printf("%   - #  *.*X\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);


	printf("\n---------------------  test X = 0 -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5X|, 0\n");
	man = printf("%   + - #  5X\n", 0);
	ft = ft_printf("%   + - #  5X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5X|, 0\n");
	man = printf("%   + - #  -5X\n", 0);
	ft = ft_printf("%   + - #  -5X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.X|, 0\n");
	man = printf("%   + - #  5.X\n", 0);
	ft = ft_printf("%   + - #  5.X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2X|, 0\n");
	man = printf("%   + - #  5.2X\n", 0);
	ft = ft_printf("%   + - #  5.2X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7X|, 0\n");
	man = printf("%   + - #  5.7X\n", 0);
	ft = ft_printf("%   + - #  5.7X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*X|, -10, 0\n");
	man = printf("%   + - #  5.*X\n", -10, 0);
	ft = ft_printf("%   + - #  5.*X\n", -10, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*X|, 2, 0\n");
	man = printf("%   + - #  5.*X\n", 2, 0);
	ft = ft_printf("%   + - #  5.*X\n", 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*X|, 5, 0\n");
	man = printf("%   + - #  5.*X\n", 5, 0);
	ft = ft_printf("%   + - #  5.*X\n", 5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 5, 2, 0\n");
	man = printf("%   + - #  *.*X\n", 5, 2, 0);
	ft = ft_printf("%   + - #  *.*X\n", 5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, 2, 0\n");
	man = printf("%   + - #  *.*X\n", -5, 2, 0);
	ft = ft_printf("%   + - #  *.*X\n", -5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, -2, 0\n");
	man = printf("%   + - #  *.*X\n", -5, -2, 0);
	ft = ft_printf("%   + - #  *.*X\n", -5, -2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 0, 0, 0\n");
	man = printf("%   + - #  *.*X\n", 0, 0, 0);
	ft = ft_printf("%   + - #  *.*X\n", 0, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 5, 0, 0\n");
	man = printf("%   + - #  *.*X\n", 5, 0, 0);
	ft = ft_printf("%   + - #  *.*X\n", 5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -5, 0, 0\n");
	man = printf("%   + - #  *.*X\n", -5, 0, 0);
	ft = ft_printf("%   + - #  *.*X\n", -5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, 0, -5, 0\n");
	man = printf("%   + - #  *.*X\n", 0, -5, 0);
	ft = ft_printf("%   + - #  *.*X\n", 0, -5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -001, -001, 0\n");
	man = printf("%   + - #  *.*X\n", -001, -001, 0);
	ft = ft_printf("%   + - #  *.*X\n", -001, -001, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, -00, -00, 0\n");
	man = printf("%   + - #  *.*X\n", -00, -00, 0);
	ft = ft_printf("%   + - #  *.*X\n", -00, -00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*X|, +00, +00, 0\n");
	man = printf("%   + - #  *.*X\n", +00, +00, 0);
	ft = ft_printf("%   + - #  *.*X\n", +00, +00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5X|, 0\n");
	man = printf("%   - #  5X\n", 0);
	ft = ft_printf("%   - #  5X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5X|, 0\n");
	man = printf("%   - #  -5X\n", 0);
	ft = ft_printf("%   - #  -5X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.X|, 0\n");
	man = printf("%   - #  5.X\n", 0);
	ft = ft_printf("%   - #  5.X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2X|, 0\n");
	man = printf("%   - #  5.2X\n", 0);
	ft = ft_printf("%   - #  5.2X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7X|, 0\n");
	man = printf("%   - #  5.7X\n", 0);
	ft = ft_printf("%   - #  5.7X\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*X|, -10, 0\n");
	man = printf("%   - #  5.*X\n", -10, 0);
	ft = ft_printf("%   - #  5.*X\n", -10, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*X|, 2, 0\n");
	man = printf("%   - #  5.*X\n", 2, 0);
	ft = ft_printf("%   - #  5.*X\n", 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*X|, 5, 0\n");
	man = printf("%   - #  5.*X\n", 5, 0);
	ft = ft_printf("%   - #  5.*X\n", 5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 5, 2, 0\n");
	man = printf("%   - #  *.*X\n", 5, 2, 0);
	ft = ft_printf("%   - #  *.*X\n", 5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, 2, 0\n");
	man = printf("%   - #  *.*X\n", -5, 2, 0);
	ft = ft_printf("%   - #  *.*X\n", -5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, -2, 0\n");
	man = printf("%   - #  *.*X\n", -5, -2, 0);
	ft = ft_printf("%   - #  *.*X\n", -5, -2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 0, 0, 0\n");
	man = printf("%   - #  *.*X\n", 0, 0, 0);
	ft = ft_printf("%   - #  *.*X\n", 0, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 5, 0, 0\n");
	man = printf("%   - #  *.*X\n", 5, 0, 0);
	ft = ft_printf("%   - #  *.*X\n", 5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -5, 0, 0\n");
	man = printf("%   - #  *.*X\n", -5, 0, 0);
	ft = ft_printf("%   - #  *.*X\n", -5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, 0, -5, 0\n");
	man = printf("%   - #  *.*X\n", 0, -5, 0);
	ft = ft_printf("%   - #  *.*X\n", 0, -5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -001, -001, 0\n");
	man = printf("%   - #  *.*X\n", -001, -001, 0);
	ft = ft_printf("%   - #  *.*X\n", -001, -001, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, -00, -00, 0\n");
	man = printf("%   - #  *.*X\n", -00, -00, 0);
	ft = ft_printf("%   - #  *.*X\n", -00, -00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*X|, +00, +00, 0\n");
	man = printf("%   - #  *.*X\n", +00, +00, 0);
	ft = ft_printf("%   - #  *.*X\n", +00, +00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	return (0);
}
