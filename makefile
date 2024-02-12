NAME = libft.a

SRCS = ft_memchr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_atoi.c ft_isprint.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_isdigit.c ft_strlen.c ft_strdup.c ft_strncmp.c
#BON = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

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
