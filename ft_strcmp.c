/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:07:35 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/22 21:24:30 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strcmp(char *s1, char *s2)
{
	int			i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i] -s2[i])
	i++;
	}
	return (s1[i] -s2[i]);
}

int		main()
{
	char str1[ ] = "fresh";
	char str2[ ] = "refresh";
	int i, j, k ;
	i = strcmp (str1, "fresh");
	j = strcmp (str1, str2);
	k = strcmp (str1, "f") ;
	printf ("\n%d %d %d", i, j, k);
	return (0);
}
