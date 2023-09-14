/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:22 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/21 14:43:54 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

/*
int main ()
{


	//printf ("parte 1.1 %s \n" ,dest);
	printf ("parte 1.1 %s \n" , ft_memcpy((0), "segfaulter tu dois", 17));
	//memcpy(dest, src, 3);
	//printf ("parte 1.2 %s \n" ,dest);
	printf ("COP 1.2   %s \n" , memcpy((0), "segfaulter tu dois", 17));
}

int main ()
{

	char dest[] = "abcdef";
	char src[] = "123";

	printf ("parte 1.1 %s \n" ,dest);
	printf ("parte 1.1 %s \n" , (unsigned char *)ft_memset(dest, src, 6));
	memcpy(dest, src, 3);
	printf ("parte 1.2 %s \n" ,dest);
	printf ("COP 1.2   %s \n" ,(unsigned char*)memcpy(dest, src, 3));
}
*/
