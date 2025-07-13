/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:28:49 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/14 00:06:18 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	size;
	int	pos_lap1;
	int	pos_lap2;

	size = 0;
	while (base[size])
		size++;
	if (size <= 1)
		return (1);
	pos_lap1 = 0;
	while (base[pos_lap1])
	{
		if (base[pos_lap1] == '+' || base[pos_lap1] == '-')
			return (1);
		pos_lap2 = pos_lap1 + 1;
		while (base[pos_lap2])
		{
			if (base[pos_lap1] == base[pos_lap2])
				return (1);
			pos_lap2++;
		}
		pos_lap1++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

void	ft_putnbr(int nbr, char *base, int size_base)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < size_base)
	{
		write(1, &base[nb % size_base], 1);
	}
	else
	{
		ft_putnbr(nb / size_base, base, size_base);
		write(1, &base[nb % size_base], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;

	if (check_base(base))
		return ;
	size_base = ft_strlen(base);
	ft_putnbr(nbr, base, size_base);
}
