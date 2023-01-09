/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:42:24 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 07:47:16 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
		i = nb + 1;
	else
		i = nb + 2;
	while (i < nb * 2)
	{
		if (ft_prime(i) == 1)
			return (i);
		i += 2;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 17, ft_find_next_prime(17));
}
*/
