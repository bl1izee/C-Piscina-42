/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:32:44 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/19 17:22:31 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 0)
		num *= nb--;
	return (num);
}
