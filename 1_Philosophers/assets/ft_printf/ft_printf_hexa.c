/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:57:00 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 12:17:41 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printh(int i, int p)
{
	int	d;

	if (i <= 9)
	{
		d = 48 + i;
		write (1, &d, 1);
	}
	else
	{
		d = i - 10 + p;
		write (1, &d, 1);
	}
}
/*
static int	printhexa(int c, int i, int p)
{
	int	j;

	if (i == -2147483648)
	{
		write (1, "-80000000", 9);
		return (9 + c);
	}
	if (i < 0)
	{
		write (1, "-", 1);
		i = -i;
		c = c + 1;
	}
	if (i < 16)
	{
		printh(i, p);
		return (c + 1);
	}
	else
	{
		j = i % 16;
		i = i / 16;
		c = printhexa(c, i, p);
	}
	printh (j, p);
	return (c + 1);
}
*/

static int	printpoint(int c, unsigned int i, int p)
{
	unsigned int	j;

	if (i < 16)
	{
		printh((int) i, p);
		c = c + 1;
		return (c);
	}
	else
	{
		j = i % 16;
		i = i / 16;
		c = printpoint(c, i, p);
	}
	c = c + 1;
	printh(j, p);
	return (c);
}

static long	printp(int c, unsigned long i, int p)
{
	unsigned int	j;

	if (i < 16)
	{
		printh((int) i, p);
		c = c + 1;
		return (c);
	}
	else
	{
		j = i % 16;
		i = i / 16;
		c = printp(c, i, p);
	}
	c = c + 1;
	printh(j, p);
	return (c);
}

int	ft_print_x(int c, va_list ap, int p)
{
	unsigned int	i;

	i = va_arg(ap, unsigned int);
	c = printpoint(c, i, p);
	return (c);
}

int	ft_print_p(int c, va_list ap)
{
	void	*i;

	i = va_arg(ap, void *);
	if (i == 0)
	{
		write(1, "(nil)", 5);
		return (c + 5);
	}
	write(1, "0x", 2);
	c = c + 2;
	c = printp(c, (unsigned long) i, 97);
	return (c);
}
// lc, p = 97

/*
int main()
{
	int p;
	int i;
	int c;
	c = 0;
	i = -2147483648;
	p = 97;
	c = printhexa( c, i, p);
	printf ("\n\n\n\n" );
}

*/
