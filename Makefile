#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/08/07 00:35:03 by varichar          #+#    #+#             *#
#*   Updated: 2016/08/08 16:35:15 by varichar         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a
HEADER = includes/

SRCS = $(shell ls srcs)
SRCS_DIR = $(addprefix srcs/, $(SRCS))
OBJ = ${SRCS:c=o}

CFLAGS = -Wall -Werror -Wextra
CC = gcc

RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m


all: $(NAME)

$(NAME):
	@$(CC) -c $(CFLAGS) -I$(HEADER) $(SRCS_DIR)
	@echo "$(GREEN)[✓]$(NC) Objects compiled"
	@ar rc $(NAME) $(OBJ)
	@echo "$(GREEN)[✓]$(NC) Library $(NAME) built"
	@ranlib $(NAME)
	@echo "$(GREEN)[✓]$(NC) Library $(NAME) indexed"

.PHONY: clean
clean:
	@rm -Rf $(OBJ)
	@echo "$(RED)[-]$(NC) Objects cleaned"

fclean: clean
	@rm -Rf $(NAME)
	@echo "$(RED)[-]$(NC) Library $(NAME) cleaned"

re: fclean all
