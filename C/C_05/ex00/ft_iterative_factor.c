/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factor.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:11:56 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 00:17:53 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factor(int nb)
{
	int	i;
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (result);
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%i", ft_iterative_factor(12));
	return (0);
}
