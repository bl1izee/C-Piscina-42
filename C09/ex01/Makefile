# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 13:29:12 by pablomar          #+#    #+#              #
#    Updated: 2025/07/23 13:55:03 by pablomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HEADERS_FOLDER = includes

# Transofrmar los .c en objetos .o
%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) -c $< -o $@

# Regla principal
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Limpiar los objetos
clean:
	rm -f $(OBJS)

# Limpiar los objetos y la biblioteca
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all
