/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:34:40 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 07:41:48 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	i = 2;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d -> %d\n", 200, ft_is_prime(200));
	printf("%d -> %d\n", 201, ft_is_prime(201));
	printf("%d -> %d\n", 202, ft_is_prime(202));
	printf("%d -> %d\n", 203, ft_is_prime(203));
	printf("%d -> %d\n", 204, ft_is_prime(204));
	printf("%d -> %d\n", 205, ft_is_prime(205));
}
*/
