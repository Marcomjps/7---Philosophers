/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:30:25 by marsilva          #+#    #+#             */
/*   Updated: 2022/12/06 16:30:28 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
typedef struct	s_list
{
void			*content;
struct s_list	*next;
}				t_list;
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*
lst : endereco do ponteiro para o link da primeira lista
new : enderenco de um ponteiro para o no a ser adicionado na lista
decricao : adiciona o no "novo" para o inicio da lista
*/
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
