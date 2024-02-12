NAME = libft.a

SRCS = ft_strnstr.c ft_memset.c ft_memchr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_atoi.c ft_isprint.c ft_tolower.c ft_toupper.c ft_isdigit.c ft_strlen.c ft_strdup.c ft_strncmp.c

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

OBJB = ${BON:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJB}
	ar rcs ${NAME} ${OBJB}

clean:
	rm -rf	${OBJS} ${OBJB}

fclean: clean
	rm -rf ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re
