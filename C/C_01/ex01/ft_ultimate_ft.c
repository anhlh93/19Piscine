/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:10:23 by hle               #+#    #+#             */
/*   Updated: 2022/11/03 11:37:53 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	long	b;
	int		i;
	char	c[10];

	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	b = a;
	i = 0;
	while (b >= 10)
	{
		c[i] = b % 10 + '0';
		b = b / 10;
		i++;
	}
	c[i] = b + '0';
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int	a;
	int	*ptr;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int	********ptr7;
	int	*********ptr8;
	
	a = 21; 
	ptr = &a;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_ultimate_ft(ptr8);
	ft_putnbr(a);
}
*/
