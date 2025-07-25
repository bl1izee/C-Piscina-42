/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:22:40 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/25 15:51:28 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	fd_putc(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

int	ft_atoi(char *str)
{
	int	num;
	int	symbol;

	num = 0;
	symbol = 1;
	if (str == NULL)
		return (10);
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
