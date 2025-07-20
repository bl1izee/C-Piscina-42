/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:14:23 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 16:35:21 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	**ft_sort_params(char **list, int tam)
{
	int		index;
	int		pos_list;
	char	*tmp;

	index = 1;
	while (index < tam)
	{
		pos_list = index + 1;
		while (pos_list < tam)
		{
			if (ft_strcmp(list[index], list[pos_list]) > 0)
			{
				tmp = list[index];
				list[index] = list[pos_list];
				list[pos_list] = tmp;
			}
			pos_list++;
		}
		index++;
	}
	return (list);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	num;

	if (argc < 2)
		return (1);
	ft_sort_params(argv, argc);
	num = 1;
	while (num < argc)
		ft_putstr(argv[num++]);
	return (0);
}
