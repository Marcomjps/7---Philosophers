/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:12:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2023/09/21 15:28:58 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	print_and_return_value(int value, char *string)
{
	write(1, "Error:\n", 7);
	ft_putendl_fd(string, 0);
	write(1, "\n", 1);
	return (value);
}

unsigned long	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = (k * 10) + (str[i] - 48);
		i++;
	}
	return (k * j);
}

size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (fd, &str[i], 1);
		i++;
	}
	write (fd, &"\n", 1);
}
