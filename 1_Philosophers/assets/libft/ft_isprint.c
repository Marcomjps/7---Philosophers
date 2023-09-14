/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:33 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/21 14:48:09 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
#include<stdio.h>
#include<ctype.h>
int main()
{
   char c;
   c = ' ';
   printf("Teste 1: %d\n", isprint(c));
	printf("Teste 1p2: %d\n", ft_isprint(c));

   c = '=';
   printf("Teste 2: %d\n", isprint(c));
	printf("Teste 2p2: %d\n", ft_isprint(c));
   c='^';
   printf("Teste 3: %d\n", isprint(c));
	printf("Teste 2p2: %d\n", ft_isprint(c));
}*/
