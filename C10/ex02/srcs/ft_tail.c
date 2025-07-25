/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:56:58 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/25 16:21:14 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	calc_bytes(int argc, char **argv)
{
	int	pos;

	pos = 0;
	while (++pos < argc)
	{
		if (ft_strcmp(argv[pos], "-c") == 0)
		{
			return (ft_atoi(argv[pos + 1]));
		}
	}
	return (10);
}

int	print_files(int argc, char **argv, int pos_arg, int parameter)
{
	int		size_fd;
	int		n_bytes;

	n_bytes = calc_bytes(argc, argv);
	if (n_bytes == 0)
		return (0);
	else if (n_bytes < 0)
		n_bytes = -n_bytes;
	while (++pos_arg < argc)
	{
		if (ft_strcmp(argv[pos_arg], "-c") == 0 || parameter == 1)
		{
			if (parameter == 1)
				parameter = 0;
			else
				parameter = 1;
			continue ;
		}
		size_fd = calc_size_fd(argv[pos_arg]);
		if (size_fd == 0)
			return (0);
		if (read_file(argv[pos_arg], n_bytes, size_fd))
			return (1);
	}
	return (0);
}

int	calc_size_fd(char	*fd_name)
{
	int		fd;
	char	buffer;
	int		size;

	if (open_file(&fd, O_RDONLY, fd_name))
		return (1);
	size = 0;
	while (read(fd, &buffer, 1) > 0)
		size++;
	close(fd);
	return (size);
}

int	ft_tail(int argc, char **argv)
{
	int		exit;
	char	character;

	exit = 0;
	if (argc > 1 && exit == 0)
	{
		exit = print_files(argc, argv, 0, 0);
	}
	else
	{
		while (read(0, &character, 1) > 0)
			ft_putc(character);
	}
	return (exit);
}
