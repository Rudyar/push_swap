# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 14:56:55 by arudy             #+#    #+#              #
#    Updated: 2021/12/14 16:29:37 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = ./libft

OBJS_LIBFT = ${LIBFT:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

${NAME}:	${OBJS}
			make -C ${LIBFT}
			${NAME} ${OBJS} ${LIBFT}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS} ${OBJS_LIBFT}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
