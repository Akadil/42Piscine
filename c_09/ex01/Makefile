NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEAD_DIR = ./includes/
HEAD = ${HEAD_DIR}ft.h
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -I${HEAD_DIR} -c $^ -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

re: fclean all
