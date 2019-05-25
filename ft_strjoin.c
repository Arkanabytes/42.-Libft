/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 21:55:04 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/25 03:40:05 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char		*ft_strcpy(char *dst, const char *src)
{
	char	*ret;

	if (!dst || !src)
		return (dst);
	ret = (char *)dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	str = (char *)malloc(sizeof(char)*(ft_strlen((char *)s1) + ft_strlen(char *)s2) +1))
	if (str)
		ft_strcpy(ft_strcpy(str, s1), s2);
	return (str);
}

int main(int argc, char **argv)
{
	char *s;
	char *t;
	char *str;

	s = argv[1];
	t = argv[2];
	if (argc == 3)
	{
		str = ft_strjoin(s, t);
		printf("%s", str);
	}
	printf("\n");
	return (0);
}
