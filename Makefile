# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gubranco <gubranco@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 17:58:23 by gubranco          #+#    #+#              #
#    Updated: 2023/01/30 22:09:23 by gubranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

LIBFT	= libft

LIB 	= ft_printf.h -L.libft -lft

SRC		= $(wildcard ft_printf/*.c)

OBJ		= $(SRC:.c=.o) #PARA CADA ARQUIVO .C DA PARTE OBRIGATORIA SERIA CRIADO UM .O

RM		= rm -f #REMOVE OS ARQUIVOS ESPECIFICADOS

AR		= ar -rcs #REUNIR TODOS AS FUNCOES COMPILADAS EM UMA UNICA BIBLIOTECA

CC		= gcc #PROGRAMA QUE VAI COMPILAR
CFLAGS	= -Wall -Wextra -Werror #FLAGS USADAS PELO PROGRAMA PARA COMPILAR

all:	$(NAME) #COMPILAR APENAS A PARTE OBRIGATORIA

$(NAME):	$(OBJ) #COMPILA A PARTE OBRIGATORIA ; REUNE TODOS AS FUNCOES COMPILADAS EM UMA UNICA BIBLIOTECA LIBFTPRINTF.A
					@make -C $(LIBFT)
					@cp libft/libft.a ./$(NAME)
					@$(AR) $(NAME) $(OBJ) 

clean: #APAGA OS ARQUIVOS GERADOS .O E O DIRETORIO LIBFT
		$(RM) $(OBJ)
		@make clean -C $(LIBFT)

fclean:	clean #APAGA OS ARQUIVOS GERADOS .O E O LIBFTPRINTF.A E O TODO O DIRETORIO DO LIBFT
				$(RM) $(NAME)
				@make fclean -C $(LIBFT)

re:		fclean all #APAGA OS ARQUIVOS GERADOS .O E O LIBFTPRINTF.A, E REFAZ A COMPILACAO NOVAMENTE
			
.PHONY:	all clean fclean re #REGRA PARA EVITAR CONFLITOS DE NOMES DE ARQUIVOS EXISTENTES