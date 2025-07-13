/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:21:44 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:42:39 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (c < 'A' || c > 'Z')
			return (0);
		str++;
	}
	return (1);
}
