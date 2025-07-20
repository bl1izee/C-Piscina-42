/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:27:31 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 15:56:29 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num_divider;
	int	num;

	if (nb == 0 || nb == 1)
		return (0);
	num_divider = 0;
	num = 1;
	while (num < nb && num_divider < 2)
	{
		if (nb % (num++) == 0)
			num_divider++;
	}
	if (num_divider == 1)
		return (1);
	else
		return (0);
}
