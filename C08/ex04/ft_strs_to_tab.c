/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:05:33 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/22 23:50:45 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdlib.h>

	int	ft_strlen(char *str)
	{
		int	pos;

		pos = 0;
		while (str[pos])
			pos++;
		return (pos);
	}

	void	ft_strcpy(char *dest, char *src)
	{
		int	pos;

		pos = 0;
		while (src[pos])
		{
			dest[pos] = src[pos];
			pos++;
		}
		dest[pos] = '\0';
	}

	struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
	{
		int					pos_list;
		struct s_stock_str	*list;

		list = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
		if (list == NULL)
			return (NULL);
		pos_list = 0;
		while (pos_list < ac)
		{
			list[pos_list].size = ft_strlen(av[pos_list]);
			list[pos_list].str = av[pos_list];
			list[pos_list].copy = (char *)malloc(sizeof
					(char) *(list[pos_list].size + 1));
			if (list[pos_list].copy == NULL)
				return (NULL);
			ft_strcpy(list[pos_list].copy, av[pos_list]);
			pos_list++;
		}
		list[pos_list].size = 0;
		list[pos_list].str = 0;
		list[pos_list].copy = 0;
		return (list);
	}
