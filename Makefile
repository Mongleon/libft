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
HEADER = ./

SRCS = ft_isdigit.c ft_lstiter.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strstr.c ft_atoi.c ft_isprint.c\
	   ft_lstmap.c ft_memcpy.c ft_putendl.c ft_strcat.c ft_strdup.c ft_strlen.c\
	   ft_strnequ.c ft_strsub.c ft_bzero.c ft_itoa.c ft_lstnew.c ft_memdel.c\
	   ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strmap.c ft_strnew.c\
	   ft_strtrim.c ft_isalnum.c ft_lstadd.c ft_memalloc.c ft_memmove.c\
	   ft_putnbr.c ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c\
	   ft_tolower.c ft_isalpha.c ft_lstdel.c ft_memccpy.c ft_memset.c\
	   ft_putnbr_fd.c ft_strcmp.c ft_striteri.c ft_strncat.c ft_strrchr.c\
	   ft_toupper.c ft_isascii.c ft_lstdelone.c ft_memchr.c ft_putchar.c\
	   ft_putstr.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c
OBJ = ${SRCS:c=o}

CFLAGS = -Wall -Werror -Wextra
CC = gcc

RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m


all: $(NAME)

$(NAME):
	@$(CC) -c $(CFLAGS) -I$(HEADER) $(SRCS)
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
