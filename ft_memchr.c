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

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i += 1;
	}
	return (NULL);
}

// void			*ft_memchr(const void *s, int c, size_t n)
// {
// 	const void *s;
// 	int			c;
// 	size_t		n;
// {
// 		if (n != 0)
// 		{
// 			unsigned char *p = s;
// 			do
// 			{
// 				if (*p++ == c)
// 					return ((void *) (p-1));
// 			}
// 			while (--n != 0);
// 		}
// 		return (NULL);
// }
// }

// #include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	if (!s)
// 		return (NULL);
// 	while (n--)
// 	{
// 		if (*(t_byte *)s == (t_byte)c)
// 			return ((void *)s);
// 		s++;
// 	}
// 	return (NULL);
// }