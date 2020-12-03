/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:16:34 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 08:56:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FLAG_CHARSET "-O"
# define SPECIFIER_CHARSET "cspdiuxX"

typedef struct	s_spec
{
	int			minus;
	int			zero;
	int			width;
	int			precision;
	int			specifier;
}				t_spec;

t_spec			set_flag(t_spec spec, const char **s);
t_spec			set_width(t_spec spec, const char **s, va_list ap);
t_spec			set_precision(t_spec spec, const char **s, va_list ap);
t_spec			set_specifier(t_spec spec, const char **s);
t_spec			parse_specs(const char **s, va_list ap);

void			print_int(t_spec spec, int arg);

#endif
