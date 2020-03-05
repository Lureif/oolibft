# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 17:44:13 by brjorgen          #+#    #+#              #
#    Updated: 2020/03/05 20:46:13 by brjorgen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		oolibft.a

CC =		gcc

CFLAGS =	-Wall -Werror -Wextra

NAME =		oolibft.a

SRCS =		./ft_strlen.c				\
			./ft_bzero.c           		\
			./ft_destroy_strclass.c		\
			./ft_strclass_strjoin.c		\
			./ft_strclass_strlen.c 		\
			./ft_strlen.c          		\
			./ft_strndup.c         		\
			./ft_init_strclass.c		\
			./ft_del_2dtab.c

OBJ =		$(SRCS:%.c=%.o)

HEADER = 	oolibft.h

%.o: 		%.c $(HEADER)
			$(CC) -o $@ -c $< $(CFLAGS)

all :		$(NAME)

$(NAME) :	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean :
			rm -rf $(OBJ)

fclean :	clean
			rm -rf $(NAME)

re : 		fclean all
