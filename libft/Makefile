SRC = ft_strlen.c ft_putstr.c ft_putchar.c ft_itoa.c ft_strchr.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Werror -Wextra -c $(SRC) libft.h
	ar -r $(NAME) $(OBJ)

# %.o: %.c
# 	gcc -Wall -Werror -Wextra -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
