/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:00:41 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/05 17:01:45 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (0);
}
/*
int	main(void)
{
	const char	str[] = "testE";
	char *t;
	int		c = 't';

	t = ft_strchr(str, c);
	printf("%s\n", t);
	return (0);
}
*/
/*retorna um ponteiro para a primeira ocorrencia do caracter c
na string s*/
