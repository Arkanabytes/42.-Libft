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

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void*		ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *d;
	dst = 0;
	char *s;
	src = 0;

	while(n--)
	{
		if (*s == c)
			return ++s;
		*d++ = *s++;
	}
	return NULL;
}
