/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:00:59 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/22 10:24:40 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}
/*
	#include<stdio.h>
	#include<ctype.h>
int main()
{
   char c;
   c = 'a';
   printf("Teste 1: %d\n", isalpha(c));
	printf("Teste 1p2: %d\n", ft_isalpha(c));

   c = 'Z';
   printf("Teste 2: %d\n", isalpha(c));
	printf("Teste 2p2: %d\n", ft_isalpha(c));
   c=',';
   printf("Teste 3: %d\n", isalpha(c));
	printf("Teste 2p2: %d\n", ft_isalpha(c));
}*/
