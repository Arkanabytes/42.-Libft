/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 15:56:56 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/09 15:13:44 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if(( c >= 48) && (c <= 57))
	{
	return (1);
	}
	return (1);
}

int main()
{
	char c;
	c='5';
	printf("Result when numeric character is passed: %d", isdigit(c));
	c='+';
	printf("\nResult when non-numeric character is passed: %d", isdigit(c));
	return 0;
}
