/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:06:43 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/16 05:47:10 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	i = 0;
	if (s > d)
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	if (d > s)
		while (len > 0)
		{
			len--;
			*(d + len) = *(s + len);
		}
	return (dst);
}