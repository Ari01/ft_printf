/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:58:26 by user42            #+#    #+#             */
/*   Updated: 2020/12/03 07:54:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec	init_spec()
{
	t_spec spec;

	spec.minus = -1;
	spec.zero = -1;
	spec.width = -1;
	spec.precision = -1;
	spec.specifier = -1;
	return (spec);
}

t_spec	parse_specs(const char **s, va_list ap)
{
	t_spec spec;

	spec = init_spec();
	spec = set_flag(spec, s);
	spec = set_width(spec, s, ap);
	spec = set_precision(spec, s, ap);
	spec = set_specifier(spec, s);
	return (spec);
}
