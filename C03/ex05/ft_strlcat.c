/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:21:01 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 19:23:49 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pos1;
	unsigned int	pos2;

	pos1 = 0;
	pos2 = 0;
	while (dest[pos1])
		pos1++;
	if (pos1 >= size)
		return (pos1);
	while (src[pos2] && (pos1 + pos2) < size - 1)
	{
		dest[pos1 + pos2] = src[pos2];
		pos2++;
	}
	dest[pos1 + pos2] = '\0';
	return (pos1 + pos2);
}
