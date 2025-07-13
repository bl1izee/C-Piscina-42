/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:16:37 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 23:28:21 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
