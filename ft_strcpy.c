/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:24:29 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/08 15:15:07 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char s2[8] = "abc";
	char s1[8];

	ft_strcpy(s1, s2 );
	printf( "s2 =%s\n", s2);
	printf( "s1 =%s\n ", s1);

	return (0);
}
