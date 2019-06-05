/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 21:30:27 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/04 22:57:36 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*out;

	if (!(out = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		out->content = NULL;
		out->content_size = 0;
		out->next = NULL;
		return (out);
	}
	if (!(out->content = (void*)malloc(content_size)))
		return (NULL);
	ft_memcpy(out->content, content, content_size);
	out->content_size = content_size;
	out->next = NULL;
	return (out);
}
