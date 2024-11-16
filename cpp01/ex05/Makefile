# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 23:31:36 by ryusupov          #+#    #+#              #
#    Updated: 2024/11/16 23:32:23 by ryusupov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := harl
SRC     := main.cpp \
			Harl.cpp
GPP     := g++
CFLAGS  := -Wall -Wextra -Werror -std=c++17
INC     := -I inc
OBJ_D   := obj
OBJ     := $(SRC:%.cpp=$(OBJ_D)/%.o)

all: $(NAME)
	@echo "$(NAME) built successfully\n"

$(NAME): $(OBJ)
	@echo "Linking..."
	$(GPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_D)/%.o: %.cpp | $(OBJ_D)
	@echo "Compiling $<..."
	$(GPP) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_D):
	@mkdir -p $(OBJ_D)

clean:
	@echo "Cleaning object files..."
	rm -rf $(OBJ_D)

fclean: clean
	@echo "Cleaning executable..."
	rm -rf $(NAME)

re: fclean all
	@echo "Re-compiling..."

.PHONY: all clean fclean re
