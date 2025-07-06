/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 10:34:21 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/06 19:20:44 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	count_digits(int number)
{
	int	n_digits;

	n_digits = 0;
	while (number > 0)
	{
		n_digits++;
		number /= 10;
	}
	return (n_digits);
}

int	name(int n_digits)
{
	int	expo;

	expo = 1;
	while (n_digits > 10)
	{
		expo *= 10;
		n_digits / 10;
	}
	return (expo);
}

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

void	print_zeros(int number, int n_digits)
{
	int	digits_number;

	digits_number = count_digits(number);
	while (n_digits > digits_number)
	{
		n_digits--;
		write(1, "0", 1);
	}
}

void	ft_print_combn(int n)
{
	int number;

	if (n < 0 || n > 10)
		return ;
	number = 0;
	while (count_digits(number) <= n)
	{
		if (number > 10 && (number % 10) > (number / name(number)))
		{
			if (number != 0)
				write(1, ", ", 2);
			print_zeros(number, n);
			ft_putnbr(number);
		}
		else if (number < 10)
		{
			if (number != 0)
				write(1, ", ", 2);
			print_zeros(number, n);
			ft_putnbr(number);
		}
		number++;
	}

}

int main()
{
	ft_print_combn(2);
}