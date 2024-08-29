NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = utils
LIBFT = $(LIBFT_DIR)/libft.a
AR = ar rcs

SRC_FILES = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/print_func.c $(SRC_DIR)/print_func2.c
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ_FILES) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(LIBFT_DIR) -c $< -o $@

test: $(NAME) main.c
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(LIBFT_DIR) -o test_program main.c $(OBJ_FILES) $(LIBFT)
	@echo "Test program compiled. Run './test_program' to test ft_printf."

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) test_program
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re test

