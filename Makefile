NAME = libftprintf.a

INCS_DIR	= ./includes
SRC_DIR 	= ./src
LIBFT_DIR	= ./libft
BUILD_DIR 	= ./build
LIBFT 		= $(LIBFT_DIR)/libft.a

SRC	 = ft_printf.c

OBJ	 = $(SRC:%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@ar rc $(NAME) $(OBJ)
	@echo "compile = ok ==="

$(OBJ): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@echo "compiling $<"
	@gcc -Wall -Wextra -Werror -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	@echo "libft = ok ==="


clean:
	make clean -C $(LIBFT_DIR)
	/bin/rm -f $(BUILD_DIR)/ft_printf.o
	#cp $(LIBFT) $(NAME)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	/bin/rm -f $(NAME)

re: fclean all
