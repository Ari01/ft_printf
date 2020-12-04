/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 07:26:25 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 12:50:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	printf("\n-------------------- FLAGS ------------------------\n");
	printf("n = %d ", printf("%0.5d\n", 42));
	printf("n = %d ", ft_printf("%0.5d\n\n", 42));

	printf("%010.5d\n", -42);
	ft_printf("%010.5d\n\n", -42);

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

	printf("\n------------------ UINT --------------------------\n");
	printf("%u\n", 42);
	ft_printf("%u\n\n", 42);

	printf("%u\n", +0);
	ft_printf("%u\n\n", +0);

	printf("%u\n", -65536);
	ft_printf("%u\n\n", -65536);

	printf("n = %d ", printf("%u\n", 2147483647));
	printf("n = %d ", ft_printf("%u\n\n", 2147483647));

	printf("\n------------------ Ux --------------------------\n");
	printf("%x\n", 42);
	ft_printf("%x\n\n", 42);

	printf("%x\n", +0);
	ft_printf("%x\n\n", +0);

	printf("%x\n", -65536);
	ft_printf("%x\n\n", -65536);

	printf("n = %d ", printf("%x\n", 2147483647));
	printf("n = %d ", ft_printf("%x\n\n", 2147483647));

	printf("\n------------------ UX --------------------------\n");
	printf("%X\n", 42);
	ft_printf("%X\n\n", 42);

	printf("%X\n", +0);
	ft_printf("%X\n\n", +0);

	printf("%X\n", -65536);
	ft_printf("%X\n\n", -65536);

	printf("n = %d ", printf("%X\n", 2147483647));
	printf("n = %d ", ft_printf("%X\n\n", 2147483647));

	printf("\n------------------ c --------------------------\n");
	printf("%c\n", 'a');
	ft_printf("%c\n\n", 'a');

	printf("%c\n", 'z');
	ft_printf("%c\n\n", 'z');

	printf("%c\n", '~');
	ft_printf("%c\n\n", '~');

	printf("%c\n", '0');
	ft_printf("%c\n\n", '0');

	printf("%c\n", '9');
	ft_printf("%c\n\n", '9');

	printf("%c\n", 'Z');
	ft_printf("%c\n\n", 'Z');

	printf("%c\n", ' ');
	ft_printf("%c\n\n", ' ');

	printf("n = %d ", printf("%c\n", '\n'));
	printf("n = %d ", ft_printf("%c\n\n", '\n'));

	printf("\n---------------------- s -------------------------\n");
	printf("%s\n", "il etait une fois 42\n");
	ft_printf("%s\n", "il etait une fois 42\n\n");

	printf("n = %d ", printf("%.5s\n", "il e\ntait une fois 42\n"));
	printf("n = %d ", ft_printf("%.5s\n", "il e\ntait une fois 42\n\n"));

	printf("%s\n", "");
	ft_printf("%s\n", "");

	printf("%5.3s\n", NULL);
	//ft_printf("%5.3s\n\n", NULL);

	printf("%-5.3s\n", NULL);
	//ft_printf("%-5.3s\n", NULL);

	printf("\n---------------------- p ---------------------------\n");
	char *s = "abc";
	char *s2 = malloc(sizeof(*s2));
	int t[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("%p\n", s);
	ft_printf("%p\n\n", s);

	printf("%p\n", t);
	ft_printf("%p\n\n", t);

	printf("%5p\n", NULL);
	ft_printf("%5p\n", NULL);

	printf("n = %d ", printf("%p\n", s2));
	printf("n = %d ", ft_printf("%p\n", s2));

	printf("\n--------------------- %% ---------------------------\n");
	printf("%05%\n");
	ft_printf("%05%\n");

	printf("\n--------------------- d ---------------------------\n");
	printf("%.0d\n", 0);
	ft_printf("%.0d\n\n", 0);

	printf("%5.0d", 0);
	printf("\n");
	ft_printf("%5.0d", 0);
	printf("\n\n");

	printf("%-5.0d", 0);
	printf("\n");
	ft_printf("%-5.0d", 0);
	printf("\n\n");

	printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);

	return (0);
}
