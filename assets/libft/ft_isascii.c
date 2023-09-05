/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:28:39 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/07 12:28:40 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
   printf("Teste 1: %d\n", isascii(c));
	printf("Teste 1p2: %d\n", ft_isascii(c));

   c = '=';
   printf("Teste 2: %d\n", isascii(c));
	printf("Teste 2p2: %d\n", ft_isascii(c));
   c='^';
   printf("Teste 3: %d\n", isascii(c));
	printf("Teste 2p2: %d\n", ft_isascii(c));
}*/
