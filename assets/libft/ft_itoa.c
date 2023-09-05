/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:05:24 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/02 17:27:29 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int main ()
{
	int n = 0;
	printf("teste: %s\n", ft_itoa( n));
}
*/
