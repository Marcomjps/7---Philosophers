/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:40:54 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/28 15:21:04 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t  i;

        i = 0;
        if (!src && !dest)
                return (NULL);
        while (i < n)
        {
                *(char*)(dest + i) = *(char*)(src + i);
                i++;
        }
        return (dest);
}

size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		while (n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int main ()
{

	unsigned char dest[] = "abcdefg";
	unsigned char src[] = "12345";

	printf ("parte 1.1 %s \n" ,dest);
	printf ("parte 1.1 %s \n" , (unsigned char *)ft_memmove(dest, src, 5));
	//memmove (dest, src, 5);
	//printf ("parte 1.2 %s \n" ,dest);
	//printf ("COP 1.2   %s \n" ,(unsigned char*)memcpy(dest, src, 3));
	unsigned char a[] = "abcdefg";
	unsigned char b[] = "12345";

	printf ("parte 2.1 %s \n" ,a);
	printf ("parte 2.2 %s \n" , (unsigned char *)memmove(a, b, 5));

}
*/
