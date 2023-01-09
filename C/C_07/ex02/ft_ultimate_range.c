/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:43:05 by hle               #+#    #+#             */
/*   Updated: 2022/11/10 15:39:53 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*array;
	int	i;

	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	length = max - min;
	array = (int *) malloc(sizeof(int) * length);
	if (array == NULL)
	{
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < length)
	{
		array[i] = min + i;
		i++;
	}
	return (length);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 10;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
