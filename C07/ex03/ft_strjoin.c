/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:28:47 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/20 18:06:04 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calc_size(int size, char **strs)
{
	int	length;
	int	row;
	int	column;

	row = 0;
	column = 0;
	length = 0;
	while (row < size)
	{
		while (strs[row][column])
		{
			column++;
			length++;
		}
		row++;
	}
	return (length);
}

int	ft_strlen(char *sep)
{
	int	pos;

	pos = 0;
	while (sep[pos])
		pos++;
	return (pos);
}

int	save_sep(char *str_sep, int pos_str_sep, char *sep)
{
	int	pos;

	pos = 0;
	while (sep[pos])
		str_sep[pos_str_sep++] = sep[pos++];
	return (pos_str_sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_sep;
	int		total_length;
	int		sep_length;
	int		pos_str_sep;
	int		pos_strs;

	sep_length = ft_strlen(sep);
	total_length = calc_size(size, strs) + ((size - 1) * sep_length);
	str_sep = (char *)malloc(sizeof(char) * total_length + 1);
	pos_str_sep = 0;
	pos_strs = 0;
	while (pos_strs < size)
	{
		while (*strs[pos_strs])
			str_sep[pos_str_sep++] = *(strs[pos_strs]++);
		if (pos_strs < size - 1)
			pos_str_sep = save_sep(str_sep, pos_str_sep, sep);
		pos_strs++;
	}
	str_sep[pos_str_sep] = '\0';
	return (str_sep);
}
