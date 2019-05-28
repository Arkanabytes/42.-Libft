/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:16:45 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/09 12:41:03 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*d;
	unsigned const char *s;
	unsigned char		*cmp;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	cmp = (unsigned char) c;
	while(i < n)
	{
		d[i] = s[i];
		if(d[i] == cmp)
		{
			i++;
			return(& d[i];
		}
		i++;
	}
	return(NULL);
}