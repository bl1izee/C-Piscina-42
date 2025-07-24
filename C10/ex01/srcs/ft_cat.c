/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:38:42 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/24 16:10:02 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_cat(int argc, char *argv[])
{
	char	character;

	if (argc > 1)
	{
		if (read_file(argc, argv))
			return (1);
	}
	else
	{
		while (read(0, &character, 1) > 0)
			ft_putc(character);
	}
	return (0);
}
