/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:01:18 by cshea             #+#    #+#             */
/*   Updated: 2020/11/18 11:14:35 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		lenght;
	char		*result;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lenght = ft_strlen(s1);
	while (lenght && ft_strchr(set, s1[lenght]))
		lenght--;
	result = ft_substr((char*)s1, 0, lenght + 1);
	return (result);
}
