/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:38:46 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 11:44:01 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int c, va_list ap)
{
	char	*str;

	str = ft_itoa (va_arg(ap, int));
	c = c + ft_strlen (str);
	ft_putstr_fd (str, 1);
	free (str);
	return (c);
}

int	ft_print_u(int c, va_list ap)
{
	unsigned int	i;
	int				b;
	char			*str;

	i = va_arg(ap, unsigned int);
	b = 0;
	while (i >= 2147483647)
	{
		i = i - 1000000000;
		b++;
	}
	str = ft_itoa((int) i);
	str[0] = str[0] + b;
	c = c + ft_strlen (str);
	ft_putstr_fd (str, 1);
	free (str);
	return (c);
}
