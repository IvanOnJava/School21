/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:03:37 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 01:01:05 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	csrc = (unsigned char*)source;
	cdest = (unsigned char*)destination;
	i = 0;
	if (!destination && !source)
		return (destination);
	while (i < num)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (destination);
}
