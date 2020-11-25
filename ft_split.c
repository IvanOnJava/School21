/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:08:16 by cshea             #+#    #+#             */
/*   Updated: 2020/11/15 23:36:32 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int		size_word(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void		*error_free(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char		**mas_from_str(const char *s, int words, char c, char **result)
{
	int		i;
	int		j;
	int		len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = size_word(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (error_free(result, i));
		j = 0;
		while (j < len)
			result[i][j++] = *s++;
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}

char			**ft_split(char	const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	result = mas_from_str(s, words, c, result);
	return (result);
}
