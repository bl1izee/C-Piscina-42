/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:35:10 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/21 17:10:45 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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

int	ft_atoi(char *str)
{
	int	num;
	int	symbol;

	num = 0;
	symbol = 1;
	while (*str == '-' || *str == '+'
		|| *str == ' ' || (*str >= 9 && *str <= 13))
	{
		if (*str == '-')
			symbol *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
		num = num * 10 + (*(str++) - '0');
	return (num * symbol);
}

int	ft_strlen(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		nb *= ft_recursive_power(nb, --power);
		return (nb);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (check_base(base_from) || check_base(base_to))
		return (NULL);
	return (ft_convert_base2(nbr, base_from, base_to));
}
