/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:11:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/08 15:12:58 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strdup(const char *src);

int			len(char *src)
{
	int		len;

	len = 0;
	while (src[len])
	{
		len = 0;
		while (src[len])
		{
			len++;
		}
		return (len);
}

void		ft_strcpy(char *dest, char *src, int lenght)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < lenght + 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
}

char		*ft_strdup(char *src)
{
	char	*copy;
	int		lenght;

	lenght = len(src);
	copy = (char*)malloc(sizeof(*src) * (lenght + 1));
	ft_strcpy(copy, src,lenght);
	return(copy);
}

int main()
{
	char source[] = "PROVA";
	char* target = ft_strndup(source, 5);
	printf("%s", target);
	return (0);
}
