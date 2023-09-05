/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:12:10 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/24 14:12:13 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd ((nb / 10), fd);
		ft_putnbr_fd ((nb % 10), fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd ((nb + '0'), fd);
		return ;
	}
}
/*
#include <unistd.h>
#include <stdlib.h>
int	main ()
{
	int nb = -123452;
	ft_putnbr_fd( nb, 1);
}
*/
