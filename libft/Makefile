# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 17:54:18 by mwingrov          #+#    #+#              #
#    Updated: 2017/11/22 14:38:27 by mwingrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC1 =   ft_atoi.c ft_putchar.c \
		ft_putstr.c ft_strdup.c ft_strlen.c \
		ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c
SRC2 =	ft_toupper.c ft_tolower.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c
SRC3 =	ft_strcmp.c ft_strncmp.c ft_memalloc.c ft_memdel.c \
		ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strtrim.c ft_putendl.c ft_putchar_fd.c
SRC4 = 	ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_strjoin.c ft_strsub.c ft_strsplit.c ft_itoa.c \
		ft_swap.c ft_list_foreach.c \
		ft_sort_list.c ft_itoa_base.c ft_sort_int_tab.c\

SRC = $(SRC1) $(SRC2) $(SRC3) $(SRC4)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
