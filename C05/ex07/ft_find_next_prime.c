/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:48:54 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 15:56:33 by pablomar         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	nb++;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
