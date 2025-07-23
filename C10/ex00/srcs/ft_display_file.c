/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:57:34 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/23 20:51:30 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	main(int argc, char *argv[])
{
	int		fd;
	int		bytes_read;
	char	character;

	if (error_arg(argc))
	{
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(MSG_NO_READ);
		close(fd);
		return (1);
	}
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, &character, 1);
		write(1, &character, 1);
	}
	close(fd);
	return (0);
}

int	error_arg(int argc)
{
	if (argc == 1)
	{
		ft_putstr(MSG_NO_ARG);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr(MSG_MUCH_ARG);
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
