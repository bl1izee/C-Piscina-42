/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:05:36 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/25 16:19:13 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	fd_putc(char c);
int		calc_bytes(int argc, char **argv);
int		print_files(int argc, char **argv, int pos_arg, int parameter);
int		calc_size_fd(char	*fd_name);
int		ft_tail(int argc, char **argv);
int		read_file(char *fd_name, int n_bytes, int fd_size);
int		open_file(int *fd, int mode, char *file);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
