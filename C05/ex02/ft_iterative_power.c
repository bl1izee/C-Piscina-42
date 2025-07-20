/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:38:30 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/19 16:47:52 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	num = 1;
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}
