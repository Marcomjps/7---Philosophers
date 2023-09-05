/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:04:10 by marsilva          #+#    #+#             */
/*   Updated: 2022/11/30 17:34:26 by marsilva         ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char	*i;
	size_t	j;
	size_t	f;


	f = ft_strlen (s);
	j = 0;
	if (!s)
		return (NULL);
	i = malloc(sizeof(char) * (f + 1));
	if(!i)
		return(NULL);
	while (i[j])
	{
		i[j] = s[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}

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
*/
char	*ft_strtrim(char const	*s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strrchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strrchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*
	int main()
	{
		char *s1 = "erabcdefgher";
		char *set = "er";
		printf("%s\n", ft_strtrim( s1, set));
	}
*/
