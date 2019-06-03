/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:43:55 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 16:04:28 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		(((unsigned char *)dst)[j]) = (((unsigned char *)src)[j]);
		if (((unsigned char *)src)[j] == (unsigned char)c)
			return (&((unsigned char *)dst)[j + 1]);
		j++;
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
