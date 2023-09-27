/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_utilsii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:31:27 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/20 20:32:00 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static size_t	deci(int n)
{
	size_t	j;

	j = 0;
	if (n <= 0)
		j++;
	while (n != 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	size_t	j;

	i = 1;
	j = deci(n);
	str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (0);
	str[j] = '\0';
	j--;
	if (n < 0)
	{
		str[0] = '-';
		i = -1;
	}
	else if (n == 0)
		str[j] = '0';
	while (n)
	{
		str[j] = (((n % 10) * i) + '0');
		n = n / 10;
		j--;
	}
	return (str);
}
