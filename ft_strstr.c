/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:43:57 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 01:13:39 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			while (str2[j] != '\0' && str1[i + j] == str2[j])
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
