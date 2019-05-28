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

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		j;

	j = 0;
	while ((j < n) && ((unsigned char *)s1)[j] == ((unsigned char *)s2)[j])
		j += 1;
	if (j == n)
		return (0);
	else
		return (((unsigned char *)s1)[j] - ((unsigned char *)s2)[j]);
}