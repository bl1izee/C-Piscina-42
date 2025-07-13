/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:06:16 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:42:34 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (c < 'a' || c > 'z')
			return (0);
		str++;
	}
	return (1);
}
