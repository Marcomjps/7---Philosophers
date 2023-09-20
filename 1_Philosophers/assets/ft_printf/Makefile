# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 07:51:00 by marsilva          #+#    #+#              #
#    Updated: 2022/12/12 19:42:25 by marsilva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#parte 1: cc -c (todos os arquivos em c) (só é necesario caso nao esteja
#na mesma pasta) -o nome.o

#parte 2 (ar rcs libft.a ft_atoi.o ....

#_________Variaveis SIMPLES__________
RM		= rm -f

CFLAGS	=	-Wall -Wextra -Werror

CC		=	cc

NAME	=	libftprintf.a
#___________________________________________

Files	=			ft_printf.c \
				ft_printf_char.c \
				ft_printf_hexa.c \
				ft_printf_int.c \
				ft_printf_utils_A.c 
					
#Files_BONUS	=		ft_lstadd_front.c \
					
#_____________________________________________
#1.3-dependencia de 1.2, vai buscar os ficheiros .c, MAS SUBSTITUI
#POR .O
OBJS = $(Files:.c=.o)

#OBJS_BONUS = $(Files_BONUS:.c=.o)

#1.2- este é o comando que vai iniciar de facto compilaçao
$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

#1.1-comando principal, depende do $(NAME)
all:		$(NAME)

#_______________________
#remove objetos(.0)
clean:
		$(RM) $(OBJS) #$(OBJS_BONUS)

#remove tudo
fclean:	clean
		$(RM) $(NAME)
#remove tudo e repete a compilaçao
re:		fclean $(NAME)
#__________________________

#bonus: $(OBJS) $(OBJS_BONUS)
#		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)


#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(Files)
#	cc -nostartfiles -shared -o libft.so $(OBJS)



