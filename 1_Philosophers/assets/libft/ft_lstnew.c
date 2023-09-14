/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:30:33 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/06 12:30:35 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
void			*content;
struct s_list	*next;
}				t_list;
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*algo;

	algo = malloc(sizeof(t_list));
	if (!algo)
		return (NULL);
	algo->content = content;
	algo->next = NULL;
	return (algo);
}
/*
int main()
{
	t_list  *ptr;
	char *str = "qwe";
	string b = "asdfs";

	ptr = ft_lstnew(str);
	printf("string: %s\n", b);
	printf("content is %s\n next is %p\n", (char *)ptr->content, ptr->next);
}
*/
