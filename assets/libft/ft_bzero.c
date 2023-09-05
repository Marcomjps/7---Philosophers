/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:45:40 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/18 15:26:02 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n != i)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main()
{
char s[] = "teste1";
int i;
//char *n[7];

i = 3;

ft_bzero( s, i);
printf("teste: %c \n", s[3]);
}
*/
