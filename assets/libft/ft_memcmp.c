/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:18:15 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/29 12:38:19 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > (i))
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
char s1[] = "\xff\xaa\xde\x12";
char s2[] = "\xff\xaa\xde\x12MACOSAAAAA";i++;

printf("resultado1 = %i \n", memcmp(s1 ,s2 , 4));
printf("resultado2 = %i \n", ft_memcmp(s1 ,s2 , 4));
}
*/
