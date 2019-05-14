/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:40:22 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 01:34:40 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)b;
	while (len >= i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int					main(void)
{
	char ft_memset_src[50] = "Voy a cambiar desde aqui . chingadera.";
	printf("ft_memset => Before memset(): ");
	printf("%s\n", (ft_memset_src));
	memset(ft_memset_src + 25, '#', 10);
	printf("ft_memset => After memset():  ");
	printf("%s\n", (ft_memset_src));
	return (0);
}
