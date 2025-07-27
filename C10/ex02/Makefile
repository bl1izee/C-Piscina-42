# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 13:29:12 by pablomar          #+#    #+#              #
#    Updated: 2025/07/27 17:10:06 by pablomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME_PROGRAM = ft_tail
NAME_LIB = libraries/libft.a
SRCS = srcs/ft_tail.c srcs/utils.c srcs/manage_files.c
MAIN_SRCS = srcs/main.c
MAIN_OBJ = build/main.o
OBJS = $(SRCS:srcs/%.c=build/%.o)
HEADERS_FOLDER = includes

# Regla principal
all: $(NAME_PROGRAM)

$(NAME_PROGRAM): $(MAIN_OBJ) make_lib
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) $(MAIN_OBJ) $(NAME_LIB) -o $(NAME_PROGRAM)

# Crea la librería lib.a con los objetos
make_lib: $(OBJS) | dir_lib
	ar rcs $(NAME_LIB) $(OBJS)

# Convertimos el main en un objeto. Si MAIN_SRCS cambia se recomplia, pero si dir_obj se modifica no se recompila (|)
$(MAIN_OBJ): dir_obj
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) -c $(MAIN_SRCS) -o $(MAIN_OBJ)

# Transforma los .c en objetos .o
build/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I$(HEADERS_FOLDER) -c $< -o $@

# Crea la carpeta para los objetos
dir_obj:
	mkdir -p build

# Crea la carpeta para las librearías
dir_lib:
	mkdir -p libraries

# Limpia los objetos
clean:
	rm -f $(OBJS) $(MAIN_OBJ)

# Limpia el programa principal, los objetos y la biblioteca
fclean: clean
	rm -f $(NAME_PROGRAM) $(NAME_LIB)

# Reconstruir desde cero
re: fclean all

# Toma las reglas como reglas y no como archivos ni directorios
.PHONY: all clean fclean re dir_obj make_lib dir_lib
