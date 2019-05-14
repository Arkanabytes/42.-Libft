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

#include <stdio.h>
#include <string.h>

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (char *)s;
	dest = (char *)d;
	while( i < n)
	{
		d[i] = s[i];
		i++;
	}
	return	(dest);
}

int main()
{
	const char src[50] = "maria";
	char dest[50];
	strcpy(dest, "helooo!");
	printf("Before memcpy = dst = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
