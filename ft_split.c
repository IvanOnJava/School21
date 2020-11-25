/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:08:16 by cshea             #+#    #+#             */
/*   Updated: 2020/11/25 18:49:32 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**mas_from_str(const char *s, int words, char c, char **result)
{
	int		i;
	int		j;
	int		len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = ft_size_word(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_free_mas(result, i));
		j = 0;
		while (j < len)
			result[i][j++] = *s++;
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}

char		**ft_split(char	const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	result = mas_from_str(s, words, c, result);
	return (result);
}
