/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:07 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/29 18:32:07 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlen(const char c[])
{
	size_t k;
	k = 1;

	while(c[k] != '\0')
		k = k + 1;
	return(k);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*t;

	i = 0;
	t = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (t == 0)
		return (0);
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] != '\0')
	{
		t[j] = s2[i];
		i++;
		j++;
	}
	t[j] = (0);
	return (t);
}
/*int main()
{
char *s1 = "teste1";
char *s2 = "teste1";
printf("teste
		t[i++] = s[start++ -1];
		x--;*/
