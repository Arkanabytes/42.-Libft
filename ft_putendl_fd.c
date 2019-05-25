/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 01:29:39 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/16 18:03:58 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if(!s)
		return ;
	ft_putstr_fd(s,fd);
	ft_putchar_fd('\n',fd);
}

/*
{
	write(int fd, &s, 1);
}
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(1, &fd, 1);
		i++;
	}
	write(1, '\n', 1);
}
*/
