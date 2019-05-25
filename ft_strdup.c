/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:11:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/22 21:56:49 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char			*ft_strdup(const char *src);
{
	char		*s;
	int			len;

	while(src[len])
		++len;
	if(!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}

int main()
{
	char source[] = "PROVA";
	char* target = ft_strndup(source, 5);
	printf("%s", target);
	return (0);
}
