/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 21:54:06 by cshea             #+#    #+#             */
/*   Updated: 2020/11/10 13:43:00 by cshea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *any;

	any = *lst;
	while (any)
	{
		tmp = any->next;
		ft_lstdelone(any, del);
		any = tmp;
	}
	*lst = NULL;
}
