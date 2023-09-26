/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:40:39 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 11:32:33 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printvar(int c, va_list ap, char i)
{
	if ('c' == i)
		c = ft_print_c(c, va_arg(ap, int));
	else if ('s' == i)
		c = ft_print_s(c, ap);
	else if ('p' == i)
		c = ft_print_p(c, ap);
	else if ('d' == i)
		c = ft_print_d(c, ap);
	else if ('i' == i)
		c = ft_print_d(c, ap);
	else if ('u' == i)
		c = ft_print_u(c, ap);
	else if ('x' == i)
		c = ft_print_x(c, ap, 97);
	else if ('X' == i)
		c = ft_print_x(c, ap, 65);
	return (c);
}

int	ft_write(int c, const char *txt, va_list ap)
{
	int	i;

	i = 0;
	c = 0;
	while (txt[i] != 0)
	{
		if (txt[i] != '%')
			write(1, &txt[i], 1);
		else
		{
			i++;
			if (txt[i] != '%')
			{
				c = printvar(c, ap, txt[i]);
				c--;
			}
			else
				write(1, "%", 1);
		}
		i++;
		c++;
	}
	return (c);
}

int	ft_printf(const char *txt, ...)
{
	int		c;
	va_list	ap;

	c = 0;
	va_start(ap, txt);
	c = ft_write(c, txt, ap);
	va_end(ap);
	return (c);
}
