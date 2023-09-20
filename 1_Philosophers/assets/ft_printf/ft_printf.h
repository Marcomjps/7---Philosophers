/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:54:13 by marsilva          #+#    #+#             */
/*   Updated: 2023/02/07 12:14:57 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdarg.h>
# include <math.h>
//#include <iostream>
//#include "libft.h"

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;*/

size_t	ft_strlen(const char *c);
void	ft_putstr_fd(char *str, int fd);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
int		ft_print_c(int c, char i);
int		ft_print_s(int c, va_list ap);
int		ft_print_d(int c, va_list ap);
int		ft_print_u(int c, va_list ap);
int		ft_print_x(int c, va_list ap, int p);
int		ft_print_p(int c, va_list ap);
int		ft_printf(const char *txt, ...);
int		ft_write(int c, const char *txt, va_list ap);
#endif
