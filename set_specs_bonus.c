/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_specs_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 06:27:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 07:51:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int		ft_is_in_charset(const char c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

t_spec	set_flag(t_spec spec, const char **s)
{
	while (ft_is_in_charset(**s, FLAG_CHARSET))
	{
		if (**s == '0')
			spec.zero = 1;
		if (**s == '-')
			spec.minus = 1;
		if (**s == '+')
			spec.plus = 1;
		if (**s == ' ')
			spec.space = 1;
		if (**s == '#')
			spec.hash = 1;
		*s += 1;
	}
	if (spec.minus > 0)
		spec.zero = -1;
	if (spec.plus > 0)
		spec.space = -1;
	return (spec);
}

t_spec	set_width(t_spec spec, const char **s, va_list ap)
{
	if (ft_isdigit(**s))
	{
		spec.width = ft_atoi(*s);
		while (ft_isdigit(**s))
			*s += 1;
	}
	else if (**s == '*')
	{
		spec.width = va_arg(ap, int);
		if (spec.width < 0)
		{
			spec.minus = 1;
			spec.zero = -1;
			spec.width *= -1;
		}
		*s += 1;
	}
	return (spec);
}

t_spec	set_precision(t_spec spec, const char **s, va_list ap)
{
	if (**s == '.')
	{
		*s += 1;
		if (ft_isdigit(**s))
		{
			spec.precision = ft_atoi(*s);
			while (ft_isdigit(**s))
				*s += 1;
		}
		else if (**s == '*')
		{
			spec.precision = va_arg(ap, int);
			*s += 1;
		}
		else
			spec.precision = 0;
	}
	return (spec);
}

t_spec	set_specifier(t_spec spec, const char **s)
{
	if (ft_is_in_charset(**s, SPECIFIER_CHARSET))
	{
		spec.specifier = **s;
		*s += 1;
	}
	return (spec);
}
