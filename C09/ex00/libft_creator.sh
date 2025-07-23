# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 00:18:55 by pablomar          #+#    #+#              #
#    Updated: 2025/07/23 13:22:39 by pablomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a *.o
