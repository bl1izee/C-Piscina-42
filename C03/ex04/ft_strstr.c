/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:57:29 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 19:20:34 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;

	while (*str)
	{
		pos = 0;
		while (str[pos] == to_find[pos] && to_find[pos] && str[pos])
			pos++;
		if (to_find[pos] == '\0')
			return (str);
		str++;
	}
	return (0);
}
