# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 11:05:30 by aletorre          #+#    #+#              #
#    Updated: 2023/06/23 11:05:54 by aletorre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBS = ar rcs

FILES = ft_printf ft_printstr ft_print_ptr ft_print_unsigned ft_print_hex

SRC_DIR = src/

OBJ_DIR = obj/

LIBFT_DIR = libft/

LIBFT = $(LIBFT_DIR)/libft.a

SRC = $(addsuffix .c, $(FILES))

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	$(LIBS) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c includes/ft_printf.h includes/libft.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I includes -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re