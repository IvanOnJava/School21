/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 05:17:36 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 01:55:40 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] != '\0' && i < size)
	{
		if (str1[i] == str2[0])
		{
			while (str2[j] != '\0' && str1[i + j] == str2[j] && i + j < size)
			{
				if (str2[j + 1] == '\0')
					return ((char *)&str1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
