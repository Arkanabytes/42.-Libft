/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:09:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/16 16:16:15 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_putnbr(int nb)
{
	unsigned int s;

	s = 0;
	if (nb >= 0)
		s = nb;
	if (nb < 0)
	{
		s = nb * -1;
		ft_putchar('-');
	}
	if (s > 9)
		ft_putnbr(s / 10);
	ft_putchar((s % 10) + '0');
}

int		main(void)
{
	int a;

	a = 2555;
	ft_putnbr(a);
	return (0);
}
