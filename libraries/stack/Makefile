NAME = stack.a

CC = clang
CFLAGS = -c \
		-Wall \
		-Werror \
		-Wextra

AR		= ar
ARFLAGS	= rc

RM		= rm -rf
OBJ_DIR	= ./obj
SRC_DIR	= ./src

SRC = ft_stackadd_back.c ft_stackadd_front.c ft_stacklst.c ft_stacknew.c
SRC += ft_stackrm_front.c ft_stackrm_back.c ft_stacksize.c

OBJ	= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

$(OBJ_DIR):
		mkdir -p ./obj

$(NAME): $(OBJ_DIR) $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	echo $(OBJ)

.PHONY: all fclean clean re
