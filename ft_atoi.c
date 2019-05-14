/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:18:43 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 16:04:10 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	void(1 , &c, 1);
}

void	spc_chr(char *s, int *i)
{
	while ((s[*i] == ' ') || (s[*i] == '\v') ||
			(s[*i] == '\r')|| (s[*i] == '\t') ||
			(s[*i] == '\f'))
		(*i)++;
}

int		ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	spc_chr(str, &i);
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * num);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int main()
{
	char a[10] = "100";
	int value = atoi(a);
	printf("Value = %d\n", value);
	return (0);
}
