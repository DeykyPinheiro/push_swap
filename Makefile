NAME	=	push_swap

#PATHS
LIBFT_PATH = ./libraries/libft
RULES_PATH = ./libraries/rules

CC		=	clang
CFLAGS	= -Wall -Werror -Wextra -g

RM		=	rm -rf

OBJ_DIR = ./obj
SRC_DIR = ./src

SRC	= main.c

OBJ	=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all:		$(NAME)

$(OBJ_DIR):
	mkdir -p ./obj

$(NAME):	$(OBJ_DIR) $(OBJ)
			$(MAKE) -C $(LIBFT_PATH)
			$(MAKE) -C $(RULES_PATH)
			$(CC) $(CFLAGS) $(OBJ) $(LIBFT_PATH)/libft.a $(RULES_PATH)/rules.a -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
			$(RM) $(OBJ_DIR)
			$(MAKE) -C $(LIBFT_PATH) clean
			$(MAKE) -C $(RULES_PATH) clean

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(MAKE) -C $(RULES_PATH) fclean

re:			fclean all

n:
		clear
		norminette ./libraries ./src

r:
		./$(NAME)

.PHONY: all clean fclean re
