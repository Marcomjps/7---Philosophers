/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:18:51 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/10 16:18:53 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void test(int size)
{
	char string[] = "Hello there, Venus";
	char buffer[19];
	int r;
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
	r = ft_strlcpy(buffer,string,size);

	printf("Copied '%s' into '%s', length %d\n",
			string,
			buffer,
			r
			);
}
//dst - string que recebe
//src - string que envia
//size - tamanho da string enviada
int main()
{
    test(19);
    test(10);
    test(3);
    test(5);

    return(0);
}
*/
