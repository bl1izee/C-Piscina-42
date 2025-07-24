/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:32:13 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/24 16:08:49 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>

int		open_file(int *fd, int mode, char *file);
int		read_file(int argc, char **argv);
int		ft_strlen(char *str);
void	ft_putc(char character);
int		ft_cat(int argc, char *argv[]);

#endif