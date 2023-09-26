/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:49:27 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 11:41:34 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int c, char i)
{
	write (1, &i, 1);
	c = c + 1;
	return (c);
}

int	ft_print_s(int c, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == 0)
	{
		write (1, "(null)", 6);
		return (c + 6);
	}
	c = c + ft_strlen (str);
	ft_putstr_fd (str, 1);
	return (c);
}

//str = ft_strdup (va_arg(ap, char *));
