/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 21:10:59 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 11:04:19 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *elem;

	elem = *lst;
	if (lst && *lst)
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = new;
	}
	else if (lst)
	{
		*lst = new;
	}
}
