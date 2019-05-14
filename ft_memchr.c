/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 21:47:00 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 18:56:14 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	const void *s;
	int			c;
	size_t		n;
	{
		if (n != 0)
		{
			const unsigned char *p = s;
			do
			{
				if (*p++ == c)
					return ((void *) (p-1));
			}
			while (--n != 0);
		}
		return (NULL);
	}
}

	int			main()
{
	const char str[] = "tutor";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
