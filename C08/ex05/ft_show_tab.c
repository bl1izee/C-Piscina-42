/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:42:31 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/22 23:48:11 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb == 0)
			write(1, "0", 1);
		else if (nb < 10)
		{
			c = '0' + (nb % 10);
			write(1, &c, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			c = '0' + (nb % 10);
			write(1, &c, 1);
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	pos;

	pos = 0;
	while (par[pos].size != 0)
	{
		ft_putstr(par[pos].str);
		write(1, "\n", 1);
		ft_putnbr(par[pos].size);
		write(1, "\n", 1);
		ft_putstr(par[pos].copy);
		pos++;
	}
}
