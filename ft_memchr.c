/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:02:05 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 04:27:24 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int ch, size_t count)
{
	unsigned char *tmp;

	tmp = (unsigned char *)buffer;
	while (count)
	{
		if (*tmp == (unsigned char)ch)
		{
			return (tmp);
		}
		count--;
		tmp++;
	}
	return (NULL);
}
