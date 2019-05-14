/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:51:21 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/08 19:42:23 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strstr(char *str, char *dest)
{
	int		i;

	i	= 0;
	while (str[1] != '\0')
	{
		if (dest[i] == dest[i])
		{
			(dest[i] = dest[i]);
		}
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char s1 [] = "GeeksforGeeks";
	char s2 [] = "for";
	char* p;

	p = strstr(s1, s2);
}
