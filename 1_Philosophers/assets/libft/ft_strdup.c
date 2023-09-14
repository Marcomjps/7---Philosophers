/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:55:08 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/29 14:36:54 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}
*/
char	*ft_strdup(const char *s)
{
	char	*i;
	size_t	j;

	j = 0;
	i = malloc(sizeof(char) * (ft_strlen (s) + 1));
	if (!i)
		return (NULL);
	while (s[j])
	{
		i[j] = s[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}
/*
int	main(void)
{
	char *teste;
	char dup[] = "I malloc so I am.";
	teste = ft_strdup(dup);
	printf("|%s|\n", teste);
	char *teste1;
	char dup1[] = "I malloc so I am.";
	teste1 = strdup(dup1);
	printf("|%s|\n", teste1);
	return (0);
}
*/
