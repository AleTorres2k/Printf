# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 09:54:04 by aletorre          #+#    #+#              #
#    Updated: 2023/06/16 13:40:02 by aletorre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBS = ar rcs

FILES = ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c \

OBJECTS = $(FILES:.c=.o)

BONUS_OBJECTS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(LIBS) $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re:fclean all
	
bonus: $(BONUS_OBJECTS)
	$(LIBS) $(NAME) $(BONUS_OBJECTS)

.PHONY: all clean fclean re
