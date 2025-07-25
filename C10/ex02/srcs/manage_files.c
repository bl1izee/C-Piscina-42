/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_files.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:46:42 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/25 16:08:16 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	open_file(int *fd, int mode, char *file)
{
	*fd = open(file, mode);
	if (*fd < 0)
	{
		write(2, "'", 1);
		write(2, file, ft_strlen(file));
		write(2, "'", 1);
		write(2, " ", 1);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return (1);
	}
	return (0);
}

int	read_file(char *fd_name, int n_bytes, int fd_size)
{
	int		fd;
	int		pos;
	char	c_line;

	if (open_file(&fd, O_RDONLY, fd_name))
		return (1);
	pos = -1;
	while (++pos < fd_size - n_bytes)
		read(fd, &c_line, 1);
	while (read(fd, &c_line, 1) > 0)
		fd_putc(c_line);
	fd_putc('\n');
	close(fd);
	return (0);
}
