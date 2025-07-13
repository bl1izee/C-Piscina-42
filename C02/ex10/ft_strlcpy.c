/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:41:49 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:52:40 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;
	unsigned int	size_buffer;

	size_buffer = 0;
	pos = 0;
	if (src == NULL)
		return (size_buffer);
	while (src[size_buffer])
		size_buffer++;
	while (pos < size - 1 && src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (size_buffer);
}
