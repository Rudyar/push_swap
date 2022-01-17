# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 14:56:55 by arudy             #+#    #+#              #
#    Updated: 2022/01/17 15:57:47 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =$(addprefix srcs/, parsing/check_input.c \
		parsing/check_input_utils.c parsing/create_tab.c \
		parsing/tab_is_sorted.c parsing/create_lst.c \
		parsing/lst_utils.c operations/swap.c operations/push.c \
		operations/rotate.c operations/reverse_rotate.c \
		parsing/sort_index_lst.c sort/sort_short_lst.c sort/sort_utils.c \
		sort/sort_long_lst.c sort/sort_radix.c) main.c

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

clean:
		@make -C libft clean
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re
