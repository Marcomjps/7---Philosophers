/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:15 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/14 11:26:16 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!to_find || ! str) && n == 0)
		return (0);
	if (!to_find[j])
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			while (to_find[j] && str[i + j] && i + j < n
				&& str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
#include <bsd/string.h>

int main()
{
const char s[] ="este aaqwerrrrtyuiopasdfghjk";
const char c[] = "este";
size_t t = 3;
printf("teste %s \n", ft_strnstr(s, c, t));
printf ("corrente %s \n", strnstr(s, c, t));
}
ocaliza a primeira ocorrência
da string terminada em nulo

*/
