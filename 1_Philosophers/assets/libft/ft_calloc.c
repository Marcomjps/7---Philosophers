/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:16:57 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/29 14:21:09 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while ((size * nmemb) > i)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main( void )
{
   long *buffer;

   buffer = (long *)ft_calloc( 8539, sizeof( int ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}
*/
