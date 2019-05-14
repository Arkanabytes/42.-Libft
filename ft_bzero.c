/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:43:12 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 01:38:25 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_bzero = ft_memset(s, 0, n);
	return (0);
}
	char	*ptr;
	size_t	i;

	if (!n)
		return ;
	ptr = s;
	i = 0;
	while (i < n)
		*(ptr + i++) = 0;
}

int		main()
{
	char str[] ="abcdeee";
	int c = 6;

	ft_bzero(str, c);
	printf("cadena de caracteres del or", c, str);

	return(0);
}
