/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:40:52 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/07 14:40:54 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
const char c[] = " rtre";


printf("Teste 1 : %lu \n" ,strlen (c));
printf("Teste 1P2 : %lu" ,ft_strlen (c));
} */
