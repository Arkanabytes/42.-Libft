/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 19:49:34 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/11 13:22:27 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126 ? 1 : 0);
}

int main()
{
	char c;

	c = 'Q';
	printf("Result %c isprint %d", c, isprint(c));

	c = '\n';
	printf("Result %c  isprint %d", c, isprint(c));
	return 0;
}
