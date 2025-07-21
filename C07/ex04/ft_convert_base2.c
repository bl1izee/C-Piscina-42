/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:15:34 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/21 17:10:42 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	calc_num_from(char c, char *base_from)
{
	int	pos;

	pos = 0;
	while (c != base_from[pos])
		pos++;
	return (pos);
}

int	base_decimal(char *nbr, char *base_from)
{
	int	length_base;
	int	decimal_number;
	int	power;

	power = ft_strlen(nbr) - 1;
	length_base = ft_strlen(base_from);
	decimal_number = 0;
	while (*nbr)
	{
		decimal_number += calc_num_from(*nbr, base_from)
			* ft_recursive_power(length_base, power--);
		nbr++;
	}
	return (decimal_number);
}

int	calc_final_length(int num, int base)
{
	int	num_itera;

	num_itera = 0;
	while (num > 0)
	{
		num /= base;
		num_itera++;
	}
	return (num_itera);
}

char	*calc_base_to(char *f_nb, int d_nb, char *base_to, int length_b)
{
	int	pos;

	pos = calc_final_length(d_nb, ft_strlen(base_to));
	if (*f_nb == '-')
		pos++;
	f_nb[pos--] = '\0';
	while (d_nb > 0)
	{
		f_nb[pos--] = base_to[d_nb % length_b];
		d_nb /= length_b;
	}
	return (f_nb);
}

char	*ft_convert_base2(char *nbr, char *base_from, char *base_to)
{
	int		num_decimal;
	int		symbol;
	int		length_num;
	char	*final_number;

	symbol = 1;
	while (*nbr == '-' || *nbr == '+'
		|| *nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
	{
		if (*nbr == '-')
			symbol *= -1;
		nbr++;
	}
	num_decimal = base_decimal(nbr, base_from);
	length_num = calc_final_length(num_decimal, ft_strlen(base_to));
	if (symbol < 0)
	{
		final_number = (char *)malloc(sizeof(char) * length_num + 2);
		final_number[0] = '-';
	}
	else
		final_number = (char *)malloc(sizeof(char) * length_num + 1);
	return (calc_base_to(final_number, num_decimal,
			base_to, ft_strlen(base_to)));
}
