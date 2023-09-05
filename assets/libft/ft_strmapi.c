/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:59:45 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/05 13:40:30 by marsilva         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*test)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !test)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)+1));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = test(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	test(unsigned int i, char s)
{
	if(i < 10)
	{
		if (s >= 65 && s <= 90)
			s = s + 32;
		return (s);
	}
}
int main ()
{
	char* str = "TESTE";
	printf("%s\n",ft_strmapi(str, *test));
}
*/
