# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 17:18:45 by marsilva          #+#    #+#              #
#    Updated: 2023/09/26 18:00:58 by marsilva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

#___________________#
#					#
#		Tools		#
#___________________#

# Compilador
CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror -pthread -g
#-TSAN_OPTIONS=second_deadlock_stack=1
#  -fsanitize=thread 
# -g -fsanitize=address

#$(FlagM)


RM		:=	rm -f

#_______________________#
#						#
#		Ingredients		#
#_______________________#


#---------------------
# Diretório para

#arquivos .c
SRCDIR := ./src/

#arquivos .h
INCDIR :=	-I ./assets/include/	
#		-I ./assets/libft			
#		-I ./assets/ft_printf

#saída de objetos
OBJDIR := ./obj/

#bibloteca.a
#MLX_PATH	= ./minilibx-linux/
#MLX_NAME	= libmlx.a
#MLX			= $(MLX_PATH)$(MLX_NAME)

#LIB_PATH	= ./assets/libft/
#LIB_NAME	= libft.a
#LIB			= $(LIB_PATH)$(LIB_NAME)

#PRT_PATH	= ./assets/ft_printf/
#PRT_NAME	= ft_printf.h
#PRT			= $(PRT_PATH)$(PRT_NAME)
#----------------------

#SOURCES

SOURCES		=	a_philosophers.c	\
				b_build_struck.c	\
				c_verify_args.c		\
				d_init.c			\
				e_treads.c			\
				f_actions.c			\
				g_destroy.c			\
				z_utils.c



# Obtenha a lista de arquivos .c no diretório de origem
#- SOURCES := $(wildcard $(SRCDIR)*.c)

# Gere os nomes dos arquivos de objeto com base nos nomes dos arquivos .c
 #- OBJECTS := $(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SOURCES))
OBJS			= $(SOURCES:.c=.o)
OBJECTS	= $(addprefix $(OBJDIR), $(OBJS))
#-------------------------------------
#SOURCES        := $(SOURCES:%=$(SRC_DIR)/%)
#OBJECTS       := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)


#-------------------------------------

# Regra principal
#all: $(LIB) $(PRT) $(NAME)
all:$(NAME)

#$(MLX):
#	@make -sC $(MLX_PATH) all

#$(LIB):
#	@make -sC $(LIB_PATH) all

#$(PRT):
#	@make -sC $(PRT_PATH) all
# Regra para o programa executável
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(INCDIR)

$(OBJECTS):		| $(OBJDIR)
$(OBJDIR)%.o: $(SRCDIR)%.c
				@$(CC) $(CFLAGS) -c $< -o $@ $(INCDIR)


$(OBJDIR):
				@mkdir $(OBJDIR)


# Crie o diretório de objetos, se ainda não existir
#$(shell mkdir -p $(OBJDIR))

# Limpar os arquivos objetos

clean:
	rm -rf $(OBJDIR)
	

# Limpar os arquivos objetos e o executável
fclean:
	rm -rf $(OBJDIR) $(NAME)

# Limpar os arquivos objetos e o executável e executar regra principal
re:	fclean all


#compile :
#	cc teste.c -L minilibx-linus/mlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz  -I ./minilibx-linux -o teste
#compile2:
#	cc -Wall -Wextra -Werror So_Long.c -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -L. -lXext -L. -I ./minilibx-linux -lX11 -o teste
