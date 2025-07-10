/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:21:56 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/10 15:25:39 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos1;
	int	pos2;
	int	tmp;

	pos1 = 0;
	while (pos1 < size)
	{
		pos2 = pos1 + 1;
		while (pos2 < size)
		{
			if (tab[pos1] > tab[pos2])
			{
				tmp = tab[pos1];
				tab[pos1] = tab[pos2];
				tab[pos2] = tmp;
			}
			pos2++;
		}
		pos1++;
	}
}
