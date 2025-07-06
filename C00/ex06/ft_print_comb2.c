/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:59:20 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/06 10:32:29 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char	digit;

	if (num == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		if (num >= 10)
		{
			ft_putnbr(num / 10);
			digit = num % 10 + '0';
			write(1, &digit, 1);
		}
		else
		{
			digit = num + '0';
			write(1, &digit, 1);
		}
	}
}

void	condicion_zero(int num)
{
	if (num < 10)
		write(1, "0", 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = 0;
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				condicion_zero(num1);
				ft_putnbr(num1);
				write(1, " ", 1);
				condicion_zero(num2);
				ft_putnbr(num2);
				if (!(num1 == 98 && num2 == 99))
					write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
