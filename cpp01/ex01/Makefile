# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 17:54:03 by ryusupov          #+#    #+#              #
#    Updated: 2024/11/13 18:17:46 by ryusupov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := moarBrainz
SRC     := main.cpp \
			Zombie.cpp \
			zombieHorde.cpp
GPP     := g++
CFLAGS  := -Wall -Wextra -Werror -std=c++17
INC     := -I inc
OBJ_D   := obj
OBJ     := $(SRC:%.cpp=$(OBJ_D)/%.o)

# Rule to build the final executable
all: $(NAME)
	@echo "$(NAME) built successfully\n"

# Rule to build the executable from object files
$(NAME): $(OBJ)
	@echo "Linking..."
	$(GPP) $(CFLAGS) $(OBJ) -o $(NAME)

# Rule to compile .cpp files to .o files in the obj directory
$(OBJ_D)/%.o: %.cpp | $(OBJ_D)
	@echo "Compiling $<..."
	$(GPP) $(CFLAGS) $(INC) -c $< -o $@

# Rule to create obj directory if it doesn't exist
$(OBJ_D):
	@mkdir -p $(OBJ_D)

# Clean up object files
clean:
	@echo "Cleaning object files..."
	rm -rf $(OBJ_D)

# Clean up executable and object files
fclean: clean
	@echo "Cleaning executable..."
	rm -rf $(NAME)

re: fclean all
	@echo "Re-compiling..."

# Declare phony targets
.PHONY: all clean fclean re
