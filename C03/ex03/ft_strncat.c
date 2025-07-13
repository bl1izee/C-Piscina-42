/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:43:04 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 18:56:47 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos1;
	unsigned int	pos2;

	pos1 = 0;
	pos2 = 0;
	while (dest[pos1])
		pos1++;
	while (src[pos2] && pos2 < nb)
	{
		dest[pos1 + pos2] = src[pos2];
		pos2++;
	}
	dest[pos1 + pos2] = '\0';
	return (dest);
}
