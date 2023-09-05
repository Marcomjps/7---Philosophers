/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:39:17 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/07 11:39:21 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include<stdio.h>
#include<ctype.h>
int main()
{
   char c;
   c = 'a';
   printf("Teste 1: %d\n", isalnum(c));
	printf("Teste 1p2: %d\n", ft_isalnum(c));

   c = '9';
   printf("Teste 2: %d\n", isalnum(c));
	printf("Teste 2p2: %d\n", ft_isalnum(c));
   c=',';
   printf("Teste 3: %d\n", isalnum(c));
	printf("Teste 2p2: %d\n", ft_isalnum(c));
}*/
