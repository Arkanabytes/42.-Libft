/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:36:56 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/19 02:30:13 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void	(*f)(unsigned int, char *))
{
	int		i;
	
	i = 0;
	while(s[i] != '\0')
	{
		s[i] = *f(char *);
		i++;
	}
	return (0);
}

int		main(void)
{
	int j;

	j = 0;
	char str[] = "Prova";
	char ch[] = "P";
	while (str[j])
	{
		ch = str[j];
		ft_putchar(ft_striteri(ch));
		j++;
	}
	return (0);
}
