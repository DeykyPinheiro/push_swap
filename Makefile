NAME	=	push_swap

#PATHS
LIBFT_PATH = ./libraries/libft
RULES_PATH = ./libraries/rules
STACK_PATH = ./libraries/stack

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
			$(MAKE) -C $(STACK_PATH)
			$(CC) $(CFLAGS) $(OBJ) $(LIBFT_PATH)/libft.a $(RULES_PATH)/rules.a $(STACK_PATH)/stack.a -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
			$(RM) $(OBJ_DIR)
			$(MAKE) -C $(LIBFT_PATH) clean
			$(MAKE) -C $(RULES_PATH) clean
			$(MAKE) -C $(STACK_PATH) clean


fclean:		clean
			$(RM) $(NAME)
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(MAKE) -C $(RULES_PATH) fclean
			$(MAKE) -C $(STACK_PATH) fclean

re:			fclean all

n:
		clear
		norminette ./libraries ./src

r:		all
		clear
		./$(NAME) 0 1 2 3 4 5 6 7 8 9

rr:		re
		clear
		./$(NAME) 0 1 2 3 4 5 6 7 8 9

v:
		valgrind --leak-check=full ./$(NAME) 0 1 2 3 4 5 6 7 8 9

.PHONY: all clean fclean re
