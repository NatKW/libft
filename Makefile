NAME	= libft.a

SRCS	= ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strtrim.c\
ft_split.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c


OBJS	= ${SRCS:.c=.o}
			
CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:${OBJS}
		ar -rc $@ $^

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

clean:
	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re : fclean all

.PHONY	= all re clean fclean 
