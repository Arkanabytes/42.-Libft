/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:18:43 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/25 04:02:29 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sc(char *s, int *i)
{
    ft_putchar(c);

	while ((s[*i] == ' ') || 
        (s[*i] == '\v') ||
        (s[*i] == '\r')|| 
        (s[*i] == '\t') || 
        (s[*i] == '\f'))
		(*i)++;
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int s;

	i = 0;
	n= 0;
	s = 1;
	sc(str, &i);
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		s = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (s * n);
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}