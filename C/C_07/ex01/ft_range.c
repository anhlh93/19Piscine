/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:19:51 by hle               #+#    #+#             */
/*   Updated: 2022/11/09 10:58:40 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int	*ft_range(int min, int max)
{
	int	length;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	length = max - min + 1;
	array = malloc(sizeof(int) * length);
	i = 0;
	while (length > 0)
	{
		array[i] = min;
		min++;
		i++;
		length--;
	}
	return (array);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 1;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
