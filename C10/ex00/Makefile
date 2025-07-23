# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 13:29:12 by pablomar          #+#    #+#              #
#    Updated: 2025/07/23 20:40:27 by pablomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRCS = srcs/ft_display_file.c
OBJS = $(SRCS:srcs/%.c=build/%.o)
HEADERS_FOLDER = includes

# Regla principal
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) $(OBJS) -o $(NAME)

# Crear carpeta build si no existe
dir_obj:
	mkdir -p build

# Transofrmar los .c en objetos .o y crea build solo si es necesario
build/%.o: srcs/%.c | dir_obj
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) -c $< -o $@

# Limpiar los objetos
clean:
	rm -f $(OBJS)

# Limpiar los objetos y la biblioteca
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all

.PHONY: all clean fclean re dir_obj