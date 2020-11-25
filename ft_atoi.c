/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:47:44 by cshea             #+#    #+#             */
/*   Updated: 2020/11/16 00:19:57 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int			m;
	long int	result;

	m = 1;
	result = 0;
	while (ft_isspace(*string))
		string++;
	if (*string == '-')
		m = -m;
	if (*string == '-' || *string == '+')
		string++;
	while (*string >= '0' && *string <= '9')
	{
		result = result * 10 + (*string - '0');
		string++;
	}
	return (result * m);
}
