/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:03:09 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 07:50:55 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char *temp1;
	unsigned char *temp2;

	temp1 = (unsigned char *)buf1;
	temp2 = (unsigned char *)buf2;
	while (count > 0 && count--)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		temp1++;
		temp2++;
	}
	return (0);
}
