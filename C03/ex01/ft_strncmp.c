/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:03:21 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 18:12:36 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while ((s1[pos] || s2[pos]) && pos < n)
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}
