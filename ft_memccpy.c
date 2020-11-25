/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:59:05 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 12:07:53 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	csrc = (unsigned char*)source;
	cdest = (unsigned char*)destination;
	i = 0;
	while (i < num)
	{
		cdest[i] = csrc[i];
		if (cdest[i] == (unsigned char)c)
		{
			return ((void*)(cdest + i + 1));
		}
		i++;
	}
	return (NULL);
}
