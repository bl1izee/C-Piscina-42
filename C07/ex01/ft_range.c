/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:01:21 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 17:17:04 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	size;
	int	pos_list;

	if (min > max || min == max)
		return (NULL);
	size = max - min;
	list = (int *)malloc(sizeof(int) * size);
	pos_list = 0;
	while (min < max)
		list[pos_list++] = min++;
	return (list);
}
