/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:30:27 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 05:02:10 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	n;

	n = 0;
	while ((str1[n] != '\0') && (str2[n] != '\0') &&
			((unsigned char)str1[n] == (unsigned char)str2[n]))
	{
		n++;
	}
	if ((str1[n] == '\0') && (str2[n] == '\0'))
		return (0);
	else
		return ((unsigned char)str1[n] - (unsigned char)str2[n]);
}
