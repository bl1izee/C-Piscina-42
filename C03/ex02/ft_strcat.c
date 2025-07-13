/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:13:16 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 18:17:57 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	pos2 = 0;
	while (dest[pos1])
		pos1++;
	while (src[pos2])
	{
		dest[pos1 + pos2] = src[pos2];
		pos2++;
	}
	dest[pos1 + pos2] = '\0';
	return (dest);
}
