# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwingrov <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/02 14:51:42 by mwingrov          #+#    #+#              #
#    Updated: 2017/11/16 19:18:35 by mwingrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = main.c read_line.c get_next_line.c keypress.c fdf.c

OBJ = main.o read_line.o get_next_line.o keypress.o fdf.o

FLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit

FETCHLIB = -L libft/ -lft -I libft/

all: $(NAME)

$(NAME):
	$(MAKE) -C libft/ all
	gcc -o $(NAME) $(SRC) $(FLAGS) $(FETCHLIB)

clean:
	$(MAKE) -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	$(MAKE) -C libft/ fclean

re:	fclean all
