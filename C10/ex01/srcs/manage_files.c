/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_files.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:17:16 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/24 16:09:48 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	open_file(int *fd, int mode, char *file)
{
	*fd = open(file, mode);
	if (*fd < 0)
		return (1);
	return (0);
}

int	read_file(int argc, char **argv)
{
	int		fd;
	int		pos;
	char	c_line;

	pos = 0;
	while (++pos < argc)
	{
		if (open_file(&fd, O_RDONLY, argv[pos]))
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			return (1);
		}
		while (read(fd, &c_line, 1) > 0)
			ft_putc(c_line);
		ft_putc('\n');
		close(fd);
	}
	return (0);
}
