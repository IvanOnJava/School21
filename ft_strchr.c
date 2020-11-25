/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:26:52 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 04:47:25 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*temp;

	temp = (char *)str;
	if (!ch)
		return (temp + ft_strlen(temp));
	while (*str)
	{
		if (*str == (unsigned char)ch)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
