/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:44:29 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/22 10:50:48 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
   char c;
   c = 'I';
   printf("Teste 1: %d\n", isdigit(c));
	printf("Teste1p2: %d\n", ft_isdigit(c));

   c = '0';
   printf("Teste 2: %d\n", isdigit(c));
	printf("Teste 2p2: %d\n", ft_isdigit(c));

   c=',';
   printf("Teste 3: %d\n", isdigit(c));
	printf("Teste 3p2: %d\n", ft_isdigit(c));
   return 0;
}*/
