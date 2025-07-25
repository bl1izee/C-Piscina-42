/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:31:51 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 11:51:58 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
		dest[pos++] = '\0';
	return (dest);
}
