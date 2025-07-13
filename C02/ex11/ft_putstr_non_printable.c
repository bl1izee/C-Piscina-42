/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:53:21 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 16:14:29 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	write_no_printeable(char c)
{
	char	*base;
	char	character1;
	char	character2;

	base = "0123456789abcdef";
	character1 = base[c / 16];
	character2 = base[c % 16];
	write(1, "\\", 1);
	write(1, &character1, 1);
	write(1, &character2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!ft_str_is_printable(*str))
			write_no_printeable(*str);
		else
			write(1, str, 1);
		str++;
	}
}
