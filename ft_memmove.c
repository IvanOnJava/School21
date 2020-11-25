/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:04:58 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 05:44:55 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char *csrc;
	unsigned char *cdst;

	cdst = (unsigned char*)destination;
	csrc = (unsigned char*)source;
	if (!destination && !source)
		return (destination);
	if (source < destination)
		while (num--)
			cdst[num] = csrc[num];
	else
	{
		while (num--)
		{
			*cdst = *csrc;
			cdst++;
			csrc++;
		}
	}
	return (destination);
}
