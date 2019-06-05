/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:59:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/03 19:04:43 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*n_lst;
	t_list	*tmp;

	if (alst != NULL)
	{
		n_lst = *alst;
		while (n_lst != NULL)
		{
			if (del != NULL)
				(*del)(n_lst->content, (*n_lst).content_size);
			tmp = n_lst->next;
			free(n_lst);
			n_lst = tmp;
		}
		*alst = NULL;
	}
}
