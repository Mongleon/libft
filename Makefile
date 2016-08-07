#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/08/07 00:35:03 by varichar          #+#    #+#             *#
#*   Updated: 2016/08/07 02:01:39 by varichar         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a
HEADER = includes/

SRC = $(shell find srcs/*)
SRC_NODIR = $(notdir $(SRC))
OBJ = ${SRC_NODIR:c=o}

CFLAGS = -Wall -Werror -Wextra
CC = gcc

RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m

all: $(NAME)

$(NAME):
	@$(CC) -c $(CFLAGS) -I$(HEADER) $(SRC)
	@echo -e "$(GREEN)[✓]$(NC) Objects compiled"
	@ar rc $(NAME) $(OBJ)
	@echo -e "$(GREEN)[✓]$(NC) Library $(NAME) built"
	@ranlib $(NAME)
	@echo -e "$(GREEN)[✓]$(NC) Library $(NAME) indexed"

clean:
	@rm -Rf $(OBJ)
	@echo -e "$(RED)[-]$(NC) Objects cleaned"

fclean: clean
	@rm -Rf $(NAME)
	@echo -e "$(RED)[-]$(NC) Library $(NAME) cleaned"

re: fclean all
