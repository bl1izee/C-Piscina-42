/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 10:33:38 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/06 10:33:39 by pablomar         ###   ########.fr       */
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