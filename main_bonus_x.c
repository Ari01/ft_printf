/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 10:02:47 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 10:03:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int main(void)
{
	printf("\n---------------------  test x -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5x|, 42\n");
	man = printf("%   + - #  5x\n", 42);
	ft = ft_printf("%   + - #  5x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5x|, 42\n");
	man = printf("%   + - #  -5x\n", 42);
	ft = ft_printf("%   + - #  -5x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.x|, 42\n");
	man = printf("%   + - #  5.x\n", 42);
	ft = ft_printf("%   + - #  5.x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2x|, 42\n");
	man = printf("%   + - #  5.2x\n", 42);
	ft = ft_printf("%   + - #  5.2x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7x|, 42\n");
	man = printf("%   + - #  5.7x\n", 42);
	ft = ft_printf("%   + - #  5.7x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*x|, -10, 42\n");
	man = printf("%   + - #  5.*x\n", -10, 42);
	ft = ft_printf("%   + - #  5.*x\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*x|, 2, 42\n");
	man = printf("%   + - #  5.*x\n", 2, 42);
	ft = ft_printf("%   + - #  5.*x\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*x|, 5, 42\n");
	man = printf("%   + - #  5.*x\n", 5, 42);
	ft = ft_printf("%   + - #  5.*x\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 5, 2, 42\n");
	man = printf("%   + - #  *.*x\n", 5, 2, 42);
	ft = ft_printf("%   + - #  *.*x\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, 2, 42\n");
	man = printf("%   + - #  *.*x\n", -5, 2, 42);
	ft = ft_printf("%   + - #  *.*x\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, -2, 42\n");
	man = printf("%   + - #  *.*x\n", -5, -2, 42);
	ft = ft_printf("%   + - #  *.*x\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 0, 0, 42\n");
	man = printf("%   + - #  *.*x\n", 0, 0, 42);
	ft = ft_printf("%   + - #  *.*x\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 5, 0, 42\n");
	man = printf("%   + - #  *.*x\n", 5, 0, 42);
	ft = ft_printf("%   + - #  *.*x\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, 0, 42\n");
	man = printf("%   + - #  *.*x\n", -5, 0, 42);
	ft = ft_printf("%   + - #  *.*x\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 0, -5, 42\n");
	man = printf("%   + - #  *.*x\n", 0, -5, 42);
	ft = ft_printf("%   + - #  *.*x\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -001, -001, 42\n");
	man = printf("%   + - #  *.*x\n", -001, -001, 42);
	ft = ft_printf("%   + - #  *.*x\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -00, -00, 42\n");
	man = printf("%   + - #  *.*x\n", -00, -00, 42);
	ft = ft_printf("%   + - #  *.*x\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, +00, +00, 42\n");
	man = printf("%   + - #  *.*x\n", +00, +00, 42);
	ft = ft_printf("%   + - #  *.*x\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5x|, 42\n");
	man = printf("%   - #  5x\n", 42);
	ft = ft_printf("%   - #  5x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5x|, 42\n");
	man = printf("%   - #  -5x\n", 42);
	ft = ft_printf("%   - #  -5x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.x|, 42\n");
	man = printf("%   - #  5.x\n", 42);
	ft = ft_printf("%   - #  5.x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2x|, 42\n");
	man = printf("%   - #  5.2x\n", 42);
	ft = ft_printf("%   - #  5.2x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7x|, 42\n");
	man = printf("%   - #  5.7x\n", 42);
	ft = ft_printf("%   - #  5.7x\n", 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*x|, -10, 42\n");
	man = printf("%   - #  5.*x\n", -10, 42);
	ft = ft_printf("%   - #  5.*x\n", -10, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*x|, 2, 42\n");
	man = printf("%   - #  5.*x\n", 2, 42);
	ft = ft_printf("%   - #  5.*x\n", 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*x|, 5, 42\n");
	man = printf("%   - #  5.*x\n", 5, 42);
	ft = ft_printf("%   - #  5.*x\n", 5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 5, 2, 42\n");
	man = printf("%   - #  *.*x\n", 5, 2, 42);
	ft = ft_printf("%   - #  *.*x\n", 5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, 2, 42\n");
	man = printf("%   - #  *.*x\n", -5, 2, 42);
	ft = ft_printf("%   - #  *.*x\n", -5, 2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, -2, 42\n");
	man = printf("%   - #  *.*x\n", -5, -2, 42);
	ft = ft_printf("%   - #  *.*x\n", -5, -2, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 0, 0, 42\n");
	man = printf("%   - #  *.*x\n", 0, 0, 42);
	ft = ft_printf("%   - #  *.*x\n", 0, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 5, 0, 42\n");
	man = printf("%   - #  *.*x\n", 5, 0, 42);
	ft = ft_printf("%   - #  *.*x\n", 5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, 0, 42\n");
	man = printf("%   - #  *.*x\n", -5, 0, 42);
	ft = ft_printf("%   - #  *.*x\n", -5, 0, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 0, -5, 42\n");
	man = printf("%   - #  *.*x\n", 0, -5, 42);
	ft = ft_printf("%   - #  *.*x\n", 0, -5, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -001, -001, 42\n");
	man = printf("%   - #  *.*x\n", -001, -001, 42);
	ft = ft_printf("%   - #  *.*x\n", -001, -001, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -00, -00, 42\n");
	man = printf("%   - #  *.*x\n", -00, -00, 42);
	ft = ft_printf("%   - #  *.*x\n", -00, -00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, +00, +00, 42\n");
	man = printf("%   - #  *.*x\n", +00, +00, 42);
	ft = ft_printf("%   - #  *.*x\n", +00, +00, 42);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("\n---------------------  test x = 0 -------------------\n");
	printf("flags + #\n");

	printf("|   + - #  5x|, 0\n");
	man = printf("%   + - #  5x\n", 0);
	ft = ft_printf("%   + - #  5x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   + - #  -5x|, 0\n");
	man = printf("%   + - #  -5x\n", 0);
	ft = ft_printf("%   + - #  -5x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.x|, 0\n");
	man = printf("%   + - #  5.x\n", 0);
	ft = ft_printf("%   + - #  5.x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   + - #  5.2x|, 0\n");
	man = printf("%   + - #  5.2x\n", 0);
	ft = ft_printf("%   + - #  5.2x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.7x|, 0\n");
	man = printf("%   + - #  5.7x\n", 0);
	ft = ft_printf("%   + - #  5.7x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*x|, -10, 0\n");
	man = printf("%   + - #  5.*x\n", -10, 0);
	ft = ft_printf("%   + - #  5.*x\n", -10, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  -5.*x|, 2, 0\n");
	man = printf("%   + - #  5.*x\n", 2, 0);
	ft = ft_printf("%   + - #  5.*x\n", 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  5.*x|, 5, 0\n");
	man = printf("%   + - #  5.*x\n", 5, 0);
	ft = ft_printf("%   + - #  5.*x\n", 5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 5, 2, 0\n");
	man = printf("%   + - #  *.*x\n", 5, 2, 0);
	ft = ft_printf("%   + - #  *.*x\n", 5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, 2, 0\n");
	man = printf("%   + - #  *.*x\n", -5, 2, 0);
	ft = ft_printf("%   + - #  *.*x\n", -5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, -2, 0\n");
	man = printf("%   + - #  *.*x\n", -5, -2, 0);
	ft = ft_printf("%   + - #  *.*x\n", -5, -2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 0, 0, 0\n");
	man = printf("%   + - #  *.*x\n", 0, 0, 0);
	ft = ft_printf("%   + - #  *.*x\n", 0, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 5, 0, 0\n");
	man = printf("%   + - #  *.*x\n", 5, 0, 0);
	ft = ft_printf("%   + - #  *.*x\n", 5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -5, 0, 0\n");
	man = printf("%   + - #  *.*x\n", -5, 0, 0);
	ft = ft_printf("%   + - #  *.*x\n", -5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, 0, -5, 0\n");
	man = printf("%   + - #  *.*x\n", 0, -5, 0);
	ft = ft_printf("%   + - #  *.*x\n", 0, -5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -001, -001, 0\n");
	man = printf("%   + - #  *.*x\n", -001, -001, 0);
	ft = ft_printf("%   + - #  *.*x\n", -001, -001, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, -00, -00, 0\n");
	man = printf("%   + - #  *.*x\n", -00, -00, 0);
	ft = ft_printf("%   + - #  *.*x\n", -00, -00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   + - #  *.*x|, +00, +00, 0\n");
	man = printf("%   + - #  *.*x\n", +00, +00, 0);
	ft = ft_printf("%   + - #  *.*x\n", +00, +00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5x|, 0\n");
	man = printf("%   - #  5x\n", 0);
	ft = ft_printf("%   - #  5x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
											
	printf("|   - #  -5x|, 0\n");
	man = printf("%   - #  -5x\n", 0);
	ft = ft_printf("%   - #  -5x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.x|, 0\n");
	man = printf("%   - #  5.x\n", 0);
	ft = ft_printf("%   - #  5.x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);
													
	printf("|   - #  5.2x|, 0\n");
	man = printf("%   - #  5.2x\n", 0);
	ft = ft_printf("%   - #  5.2x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.7x|, 0\n");
	man = printf("%   - #  5.7x\n", 0);
	ft = ft_printf("%   - #  5.7x\n", 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*x|, -10, 0\n");
	man = printf("%   - #  5.*x\n", -10, 0);
	ft = ft_printf("%   - #  5.*x\n", -10, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  -5.*x|, 2, 0\n");
	man = printf("%   - #  5.*x\n", 2, 0);
	ft = ft_printf("%   - #  5.*x\n", 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  5.*x|, 5, 0\n");
	man = printf("%   - #  5.*x\n", 5, 0);
	ft = ft_printf("%   - #  5.*x\n", 5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 5, 2, 0\n");
	man = printf("%   - #  *.*x\n", 5, 2, 0);
	ft = ft_printf("%   - #  *.*x\n", 5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, 2, 0\n");
	man = printf("%   - #  *.*x\n", -5, 2, 0);
	ft = ft_printf("%   - #  *.*x\n", -5, 2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, -2, 0\n");
	man = printf("%   - #  *.*x\n", -5, -2, 0);
	ft = ft_printf("%   - #  *.*x\n", -5, -2, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 0, 0, 0\n");
	man = printf("%   - #  *.*x\n", 0, 0, 0);
	ft = ft_printf("%   - #  *.*x\n", 0, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 5, 0, 0\n");
	man = printf("%   - #  *.*x\n", 5, 0, 0);
	ft = ft_printf("%   - #  *.*x\n", 5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -5, 0, 0\n");
	man = printf("%   - #  *.*x\n", -5, 0, 0);
	ft = ft_printf("%   - #  *.*x\n", -5, 0, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, 0, -5, 0\n");
	man = printf("%   - #  *.*x\n", 0, -5, 0);
	ft = ft_printf("%   - #  *.*x\n", 0, -5, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -001, -001, 0\n");
	man = printf("%   - #  *.*x\n", -001, -001, 0);
	ft = ft_printf("%   - #  *.*x\n", -001, -001, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, -00, -00, 0\n");
	man = printf("%   - #  *.*x\n", -00, -00, 0);
	ft = ft_printf("%   - #  *.*x\n", -00, -00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	printf("|   - #  *.*x|, +00, +00, 0\n");
	man = printf("%   - #  *.*x\n", +00, +00, 0);
	ft = ft_printf("%   - #  *.*x\n", +00, +00, 0);
	printf("man = %d, ft = %d\n\n", man, ft);

	return (0);
}
