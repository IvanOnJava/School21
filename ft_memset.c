/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:05:51 by cshea             #+#    #+#             */
/*   Updated: 2020/11/15 23:37:02 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int val, size_t num)
{
	unsigned char *tmp;

	tmp = (unsigned char*)memory;
	while (num--)
	{
		*tmp++ = (unsigned char)val;
	}
	return (memory);
}
