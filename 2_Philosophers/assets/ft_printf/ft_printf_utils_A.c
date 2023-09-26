/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_A.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:03:29 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 09:57:40 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (fd, &str[i], 1);
		i++;
	}
}

char	*ft_strdup(const char *s)
{
	char	*i;
	size_t	j;

	j = 0;
	i = malloc(sizeof(char) * (ft_strlen (s) + 1));
	if (!i)
		return (NULL);
	while (s[j])
	{
		i[j] = s[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}

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
