/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:10 by hle               #+#    #+#             */
/*   Updated: 2022/10/26 17:00:59 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	long	b;
	int		i;
	char	c[10];

	b = a;
	i = 0;
	while (b >= 0)
	{
		c[i] = b % 10 + '0';
		b = b / 10;
		i ++;
	}
	i --;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i --;
	}
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
