NAME = libft

LIBNAME = libft.a

CFLAGS = gcc -Wall -Wextra -Werror

SRCS = ft*.c

OBJS = ft*.o

$(NAME):
	$(CFLAGS) -c $(SRCS) -Ilibft.h
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(LIBNAME)

re: fclean all
