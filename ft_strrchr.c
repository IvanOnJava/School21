/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:34:23 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 08:25:34 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*buf;

	buf = (char *)str;
	i = ft_strlen(buf);
	if (!ch)
		return (buf + i);
	while (i--)
	{
		if (buf[i] == ch)
			return (&(buf[i]));
	}
	return (NULL);
}
