/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:51:07 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 09:11:12 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ten_queens_check_error(int table[10], int x, int y)
{
	int	k;

	k = 0;
	while (k < x)
	{
		if (y == table[k] || k + table[k] == x + y || k - table [k] == x - y)
			return (0);
		k++;
	}
	return (1);
}

void	ft_ten_queens_fill_table(int table[10], int *res, int pos)
{
	int	j;

	if (pos == 10)
	{
		*res += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(table[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		j = -1;
		while (++j < 10)
		{
			if (ft_ten_queens_check_error(table, pos, j) == 1)
			{
				table[pos] = j;
				ft_ten_queens_fill_table(table, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];
	int	i;
	int	res;

	i = 0;
	while (i < 10)
	{
		table[i] = -1;
		i++;
	}
	res = 0;
	ft_ten_queens_fill_table(table, &res, 0);
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}
*/
