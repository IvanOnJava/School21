/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 05:07:04 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 05:02:46 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)str1[i] == (unsigned char)str2[i]) && (i < n)
		&& ((unsigned char)str1[i] != '\0') && ((unsigned char)str2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
