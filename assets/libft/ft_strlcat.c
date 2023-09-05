/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:02:35 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/23 15:37:08 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sist;
	size_t	sirc;

	sist = ft_strlen(dst);
	sirc = ft_strlen(src);
	i = 0;
	j = sist;
	if (size - 1 > sist && size > 0)
	{
		while (sist + i < size - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (sist >= size)
		sist = size;
	return (sist + sirc);
}
/*
//#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

void test(int size)
{
    char string[] = "GOODBYE there, Venus";
    char buffer[] = "Hello and";
    size_t r;
	r = 0;

printf("Copied '%s' into '%s', length %zu\n",
            string,
            buffer,
            r
          );
    r = ft_strlcat(buffer,string,size);
printf("\n");
    printf("Copied '%s' into '%s', length %zu\n",
            string,
            buffer,
            r
          );
		  printf("\n------------------------------------------\n");
}

int main()
{
    test(23);
  size_t	ft_strlcat(char *dst, const char *src, size_t size)  test(30);
    test(15);
    test(1);

    return(0);
}
*/
