/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:43:55 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/17 03:46:03 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(((unsigned char *)dst)[i]) = (((unsigned char *)src)[i]);
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (&((unsigned char *)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
// 	unsigned char    *d;
// 	unsigned char    *s;
	
//     d = (unsigned char *)dst;
//     s = (unsigned char *)src;
    
//     while(n--)
// 	{
// 		if (*s == (unsigned char)c)
// 			return (++s);
// 		*d++ = *s++;
// 	}
// 	return (NULL);
// }