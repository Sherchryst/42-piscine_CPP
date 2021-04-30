# This is a minimal set of ANSI/VT100 color codes
Color_Off=\033[0m
_GREEN=\033[1;32m
_CYAN=\033[1;36m
BRed=\033[1;31m"         # Red
_Orange=\033[1;96m        # Blue
_Purple=\033[1;35m

# FILES
NAME	=

SRC		=

# COMPILATION
CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "${_GREEN}The executable file of /*HERE NAME*/ Has been created!${Color_Off}"


all: $(NAME)

clean: fclean

fclean:
	@rm -f $(NAME)
	@echo "\033[1;34mExecute:\t\033[1;33mCleaning exec\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: all clean fclean re
