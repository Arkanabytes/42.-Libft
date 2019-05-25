/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 16:32:35 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/16 05:12:18 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char *dst;
	const char *src;
	size_t size;
	{
		char *d = dst;
		const char *s = src;
		size_t n = size;
		size_t dlen;

		while (n-- != 0 && *d != '\0')
			d++;
		dlen = d - dst;
		n = size - dlen;
		if (n == 0)
			return (dlen + strlen(s));
		while (*s != '\0')
		{
			if (n != 1)
			{
				*d++ = *s;
				n--;
			}
			s++;
		}
		*d = '\0';
		return (dlen + (s - src));
	}
}
