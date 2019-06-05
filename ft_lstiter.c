/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:53:17 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/04 16:06:41 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*nxt_lst;

	nxt_lst = lst;
	while (nxt_lst != NULL)
	{
		(*f)(nxt_lst);
		nxt_lst = nxt_lst->nxt;
	}
}
