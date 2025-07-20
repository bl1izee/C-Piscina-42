/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:54:56 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 17:13:17 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	tam;

	tam = 0;
	while (str[tam])
		tam++;
	return (tam);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		pos;
	char	*src_cpy;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src);
	src_cpy = (char *)malloc(sizeof(char) * size + 1);
	pos = 0;
	while (src[pos])
	{
		src_cpy[pos] = src[pos];
		pos++;
	}
	src_cpy[pos] = '\0';
	return (src_cpy);
}
