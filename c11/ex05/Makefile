NAME = do-op
SRCS = do-op.c ft_atoi.c
HEAD = header.h
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
