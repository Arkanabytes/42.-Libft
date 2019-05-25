/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 12:43:52 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/16 15:00:53 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int nb)
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
