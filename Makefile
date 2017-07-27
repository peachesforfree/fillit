# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkim <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/15 18:28:29 by mkim              #+#    #+#              #
#    Updated: 2017/03/16 22:12:00 by mkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = ft_calculate.c \
	   ft_delete.c \
	   ft_delete_it.c \
	   ft_delete_it1.c \
	   ft_fill_it.c \
	   ft_fill_it1.c \
	   ft_fillit.c \
	   ft_printgrid.c \
	   ft_sortblocks.c \
	   is_safe_loc.c \
	   is_safe_loc1.c \
	   is_safe_loc2.c \
	   main.c \
	   solve_tetrimino.c \
	   template_pieces.c \
	   ft_checkinput.c

LIB = libft/libft.a 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make all -C libft
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIB)

clean:
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: make clean fclean re
