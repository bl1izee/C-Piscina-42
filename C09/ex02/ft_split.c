/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:58:25 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/23 13:58:40 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calc_size(char *str, char *charset)
{
	int	size_words;
	int	pos;
	int	length_word;

	size_words = 0;
	length_word = 0;
	while (*str)
	{
		pos = 0;
		while (*str != charset[pos] && charset[pos])
			pos++;
		if (charset[pos] == *str)
		{
			if (length_word != 0)
			{
				size_words++;
				length_word = 0;
			}
		}
		else
			length_word++;
		str++;
	}
	return (size_words + 2);
}

void	alloc_list(char ***list_words, int size_list, char *str, char *charset)
{
	int	pos;
	int	len_word;
	int	tam_list;

	*list_words = (char **)malloc(sizeof(char *) * size_list);
	len_word = 0;
	tam_list = 0;
	while (*str)
	{
		pos = 0;
		while (*str != charset[pos] && charset[pos])
			pos++;
		if (charset[pos] == *(str++))
		{
			if (len_word != 0)
			{
				(*list_words)[tam_list++] = (char *)malloc(sizeof(char)
						* (len_word + 1));
				len_word = 0;
			}
		}
		else
			len_word++;
	}
	(*list_words)[tam_list] = (char *)malloc(sizeof(char) * (len_word + 1));
}

char	**save_words(char **list_words, char *str, char *charset, int len_word)
{
	int	pos;
	int	tam_list;

	tam_list = 0;
	while (*str)
	{
		pos = 0;
		while (*str != charset[pos] && charset[pos])
			pos++;
		if (charset[pos] == *str)
		{
			if (len_word != 0)
			{
				list_words[tam_list++][len_word] = '\0';
				len_word = 0;
			}
		}
		else
			list_words[tam_list][len_word++] = *str;
		str++;
	}
	if (len_word == 0)
		return (list_words[tam_list] = NULL, list_words);
	list_words[tam_list + 1] = NULL;
	return (list_words[tam_list][len_word] = '\0', list_words);
}

int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
		pos++;
	return (pos);
}

char	**ft_split(char *str, char *charset)
{
	char	**list_words;
	int		size_list;
	int		pos;

	if (*str == '\0')
	{
		list_words = (char **)malloc(sizeof(char *) * 1);
		list_words[0] = NULL;
		return (list_words);
	}
	else if (*charset == '\0')
	{
		list_words = (char **)malloc(sizeof(char *) * 2);
		list_words[0] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
		list_words[1] = NULL;
		pos = -1;
		while (str[++pos])
			list_words[0][pos] = str[pos];
		list_words[0][pos] = '\0';
		return (list_words);
	}
	size_list = calc_size(str, charset);
	alloc_list(&list_words, size_list, str, charset);
	return (save_words(list_words, str, charset, 0));
}
