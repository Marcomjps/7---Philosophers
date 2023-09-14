/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:48:37 by marsilva          #+#    #+#             */
/*   Updated: 2023/07/12 19:13:44 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Quando num ficheiro header acontece de ser incluido duas
//vezes, resulta em um erro. As duas linhas de codigo seguinte
//preve que tal nao aconteca
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *i, int j, size_t k);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n );
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const	*s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*test)(unsigned int, char));
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*test)(unsigned int, char *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

//Linha necessaria
#endif
