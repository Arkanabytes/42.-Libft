/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:37:01 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/02 15:48:51 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*r;
	size_t	com;

	r = (char *)dst;
	com = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n < com)
		ft_bzero(dst, n);
	return (r);
}

/*
char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char	*temp;

	temp = dest;
	i = 0;
	while (i <  n)
	{
		while (src[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
*/