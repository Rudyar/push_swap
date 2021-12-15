# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 14:56:55 by arudy             #+#    #+#              #
#    Updated: 2021/12/15 15:48:24 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c srcs/check_input.c srcs/check_input_utils.c srcs/create_ll_tab.c \
		

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			@make -C libft
			@${CC} ${OBJS} ${CFLAG} -o ${NAME} ${LIBFT}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

valgrind:	${OBJS}
			@make -C libft
			@${CC} -g3 ${OBJS} ${CFLAG} -o ${NAME} ${LIBFT}

clean:
		@make -C libft clean
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re
