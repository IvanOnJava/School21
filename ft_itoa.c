/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:43:15 by cshea             #+#    #+#             */
/*   Updated: 2020/11/25 18:07:40 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		lenght;

	if (n == FT_INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	lenght = ft_numbits(n);
	if (!(str = ft_calloc(lenght + 1, sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (lenght-- && str[lenght] != '-')
	{
		str[lenght] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
