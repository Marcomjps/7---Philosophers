/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:30 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/22 12:05:21 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *i, int j, size_t k)
{
	size_t			l;
	unsigned char	*ptri;

	ptri = (unsigned char *)i;
	l = 0;
	while (l != k)
	{
		ptri[l] = j;
		l++;
	}
	return (ptri);
}
/*
#include<stdio.h>
#include <string.h>
int main ()
{

	char i[] = "testedfghjk";

	printf ("parte 1.1 %s \n" , (unsigned char *)ft_memset(i, 65, 6));
	memset(i,'@',6);
	printf ("parte 2.1 %s \n" ,i);


}
*/
