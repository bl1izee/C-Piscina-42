/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:18:17 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/10 15:30:15 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	tmp;

	pos = 0;
	while (pos < size / 2)
	{
		tmp = tab[pos];
		tab[pos] = tab[size - pos - 1];
		tab[size - pos - 1] = tmp;
		pos++;
	}
}
