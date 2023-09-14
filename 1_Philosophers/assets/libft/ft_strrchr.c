/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:35:23 by marsilva          #+#    #+#             */
/*   Updated: 2023/07/12 19:14:15 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0' )
	{
		j++;
		if (s[j] == c)
			i = j;
	}
	j = 0;
	if (s[i] == c)
	{
		while (j != i)
		{
			j++;
			s++;
		}
		return ((char *)s);
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
const char s[] ="este aaqwerrrrtyuiopasdfghjk";
int c = 't';
printf("teste %s \n", ft_strrchr(s, c));
printf("corrente %s \n", strrchr(s, c));

}*/
