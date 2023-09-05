/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:37:38 by marsilva          #+#    #+#             */
/*   Updated: 2023/07/12 19:15:48 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	t = (char *)malloc((len + 1) * sizeof(*s));
	if (t == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (j >= start && i < len)
		{
			t[i] = s[j];
			i++;
		}
		j++;
	}
	t[i] = 0;
	return (t);
}
/*
int	main()
{
char const s[] = "teste12rt78";
unsigned int start = 2;
size_t len = 5;
char *a;
a = ft_substr(s, start, len);
printf("t: %s \n", a);
}
*/