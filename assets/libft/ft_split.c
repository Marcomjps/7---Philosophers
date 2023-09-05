/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:19:25 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/05 17:16:18 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
*/

size_t	medidor(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static size_t	contador(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += medidor(&s[i], c);
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((contador(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j++] = ft_substr(s, i, medidor(&s[i], c));
			if (!str[j - 1])
				return (ft_free(str));
			i += medidor(&s[i], c);
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
/*
int main()
{
	char const *s = "zero       um dois tres quatro";
	const char c = ' ';
	char **t;
	t = ft_split(s, c);
	printf("teste: |%s| \n",t[1]);
}
*/
/*


ft_split - transforma uma string numa strings de strings divindindo a partir
de um caracter e removendo o mesmo

contador - conta os caracteres da string que nao sao iguais ao caracter c
mais 1 por cada segmento nao interrompido

medidor - conta os caracteres de uma strig ate ele ser igual ao caeacter c
processo:
		1 - ver se a string tem algo la dentro
		2 - criar a string do tamanho da que recebemos sem os caractere
			correspondentes a c
		3 - verificar a integridade da anterior
		(comeca loop)
		4 - criar strings baseado no ft_substr.c
*/
