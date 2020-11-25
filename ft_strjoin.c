/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:34:54 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 14:57:15 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		lenght;

	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(sizeof(char) * lenght);
	if (!result)
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcat(result, (char *)s2);
	return (result);
}
