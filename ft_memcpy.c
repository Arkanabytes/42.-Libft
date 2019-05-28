/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:55:01 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 01:40:29 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (char *)s;
	dst = (char *)d;
	while( i < n)
	{
		d[i] = s[i];
		i++;
	}
	return	(dst);
}