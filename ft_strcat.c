/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:03:24 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 01:07:12 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destination, char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;
	i = ft_strlen(destination);
	while (source[j] != '\0')
	{
		destination[i + j] = source[j];
		j++;
	}
	destination[i + j] = '\0';
	return (destination);
}
