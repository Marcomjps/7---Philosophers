/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:50:19 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/23 16:09:22 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n )
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (ptr[i] != '\0' && ptr2[i] != '\0' && n > i)
	{
		if (ptr[i] - ptr2[i] != 0)
		{
			return (ptr[i] - ptr2[i]);
		}
		i++;
	}
	if (i < n)
		return (ptr[i] - ptr2[i]);
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
const char s1[] ="Teste1";
const char s2[] = "Tesste1";
size_t n = 3;
printf("teste %d \n", ft_strncmp(s1, s2, n));
printf("corrente %i \n", strncmp(s1, s2, n));
return (0);
}
*/
