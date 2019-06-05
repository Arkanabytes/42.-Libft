/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:48:35 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/03 18:56:19 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*cor;
	t_list		*prim;

	if (!lst)
		return (NULL);
	prim = f(lst);
	cor = prim;
	while (lst->next)
	{
		lst = lst->next;
		cor->next = f(lst);
		if (!(cor->next))
		{
			free(cor->next);
			return (NULL);
		}
		cor = cor->next;
	}
	return (prim);
}
