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
	t_list		*i;
	t_list		*j;

	if (!lst)
		return (NULL);
	j = f(lst);
	i = j;
	while (lst->next)
	{
		lst = lst->next;
		i->next = f(lst);
		if (!(i->next))
		{
			free(i->next);
			return (NULL);
		}
		i = i->next;
	}
	return (j);
}