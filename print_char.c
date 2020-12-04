/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 06:34:06 by user42            #+#    #+#             */
/*   Updated: 2020/12/04 06:43:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		print_char(t_spec spec, unsigned char c)
{
	char	*space;
	int		nbytes_written;

	space = NULL;
	nbytes_written = 0;
	if (spec.width > 1)
	{
		space = ft_strnew(' ', spec.width - 1);
		if (!space)
			return (0);
		if (spec.minus < 0)
		{
			ft_putstr_fd(space, STDOUT_FILENO);
			nbytes_written += ft_strlen(space);
		}
	}
	ft_putchar_fd(c, STDOUT_FILENO);
	nbytes_written++;
	if (space && spec.minus > 0)
	{
		ft_putstr_fd(space, STDOUT_FILENO);
		nbytes_written += ft_strlen(space);
	}
	free(space);
	return (nbytes_written);
}
