# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 17:58:23 by gubranco          #+#    #+#              #
#    Updated: 2022/12/13 15:52:34 by gubranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_itoa.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_split.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_tolower.c \
					ft_toupper.c \
		
EXTRA		= ft_lstadd_back.c \
								ft_lstadd_front.c \
								ft_lstclear.c \
								ft_lstdelone.c \
								ft_lstiter.c \
								ft_lstlast.c \
								ft_lstmap.c \
								ft_lstnew.c \
								ft_lstsize.c \

OBJS		= $(SRC:.c=.o) #PARA CADA ARQUIVO .C DA PARTE OBRIGATORIA SERIA CRIADO UM .O
EXTRA_OBJS		= $(EXTRA:.c=.o) #PARA CADA ARQUIVO .C DA PARTE BONUS SERIA CRIADO UM .O

RM		= rm -f #REMOVE OS ARQUIVOS ESPECIFICADOS

AR		= ar -rcs #REUNIR TODOS AS FUNCOES COMPILADAS EM UMA UNICA BIBLIOTECA

CC		= gcc #PROGRAMA QUE VAI COMPILAR
CFLAGS	= -Wall -Wextra -Werror #FLAGS USADAS PELO PROGRAMA PARA COMPILAR

all:	$(NAME) #COMPILAR APENAS A PARTE OBRIGATORIA

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) #COMPILA A PARTE OBRIGATORIA ; REUNE TODOS AS FUNCOES COMPILADAS EM UMA UNICA BIBLIOTECA LIBFT.A
					$(AR) $(NAME) $(OBJS) 

bonus:	$(OBJS) $(EXTRA_OBJS) libft.h #COMPILA A PARTE OBRIGATORIA E A BONUS ; REUNE TODOS AS FUNCOES COMPILADAS EM UMA UNICA BIBLIOTECA LIBFT.A
				$(AR) $(NAME) $(OBJS) $(EXTRA_OBJS) 

clean: #APAGA OS ARQUIVOS GERADOS .O
		$(RM) $(OBJS) $(EXTRA_OBJS)

fclean:	clean #APAGA OS ARQUIVOS GERADOS .O E O LIBFT.A
				$(RM) $(NAME)

re:		fclean all #APAGA OS ARQUIVOS GERADOS .O E O LIBFT.A, E REFAZ A COMPILACAO NOVAMENTE

.PHONY:	all clean fclean re bonus #REGRA PARA EVITAR CONFLITOS DE NOMES DE ARQUIVOS EXISTENTES