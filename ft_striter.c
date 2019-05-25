/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:35:58 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/19 02:13:48 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_striter(char *s, void(*f)(char *))
{
	if (s)
	{
		for (int i = 0; s[i]; i++)
		{
			f(&s[i]);
		}
	}
	return ;
}

int main(void)
{
	char a[10] = "100";
	int value = atoi(a);
	printf("valor = %d\n", value);
	return (0);
}
