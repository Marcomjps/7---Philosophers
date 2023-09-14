/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:38:39 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/05 17:09:08 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	test(unsigned int i, char s)
{
	if(i < 10)
	{
		if (s >= 65 && s <= 90)
			s = s + 32;
	}
}
*/
void	ft_striteri(char *s, void (*test)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !test)
		return ;
	i = 0;
	while (s[i])
	{
		test(i, &s[i]);
		i++;
	}
}

/*
int main ()
{
	char* str = "TESTE";
	ft_striteri(str, *test);
	printf("%s\n", *str);
}
*/
