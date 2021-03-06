/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:16:34 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 12:51:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FLAG_CHARSET "-0"
# define SPECIFIER_CHARSET "cspdiuxX%"
# define INT_SPECIFIER_CHARSET "diuxXp"

struct	s_spec
{
	int	minus;
	int	zero;
	int	width;
	int	precision;
	int	specifier;
};

typedef struct s_spec	t_spec;

char	*ft_strnew(char c, size_t len);
int		ft_is_in_charset(const char c, const char *charset);

t_spec	set_flag(t_spec spec, const char **s);
t_spec	set_width(t_spec spec, const char **s, va_list ap);
t_spec	set_precision(t_spec spec, const char **s, va_list ap);
t_spec	set_specifier(t_spec spec, const char **s);
t_spec	parse_specs(const char **s, va_list ap);

char	*convert_u(unsigned int n);
char	*convert_base(unsigned long int n, char *base);

int		print_int(t_spec spec, char *arg);
int		print_char(t_spec spec, unsigned char c);
int		print_string(t_spec spec, const char *s);
int		print_adress(t_spec spec, void *adr);
ssize_t	strlprint(const char *s, size_t len);

int		ft_printf(const char *s, ...) __attribute__((format(printf,1,2)));
int		ft_printf(const char *s, ...);

#endif
