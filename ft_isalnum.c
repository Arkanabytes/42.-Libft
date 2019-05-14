/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 15:53:59 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/12 23:57:27 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	if(ft_isdigit(c) || ft_isalpha(c))
		return(1);
	else
		return (0);
}

int main()
{
	char c;
	printf("ingrese carqacter");
	scanf("%c", &c);

	if (isalnum(c) == 0)
		printf("%c is not an alphanumeric character", c);
	else
		printf("%c is an alphanumeric character" , c);
	return (0);
}
