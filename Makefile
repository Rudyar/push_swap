# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 14:56:55 by arudy             #+#    #+#              #
#    Updated: 2021/12/14 17:56:22 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			make -C libft
			${NAME} ${OBJS} ${LIBFT}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		make -C libft clean
		${RM} ${OBJS}

fclean: clean
		make -C libft clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
