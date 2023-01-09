/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:11:04 by hle               #+#    #+#             */
/*   Updated: 2022/10/24 12:31:59 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	toprow(int col, int row, char enter, char asterix)
{
	char	slash;
	char	backslash;
	int		col2;

	slash = 47;
	backslash = 92;
	ft_putchar(slash);
	if (col > 2)
	{
		col2 = col;
		while (col2 > 2)
		{
			ft_putchar(asterix);
			col2--;
		}
	}
	if (col > 1)
	{
		ft_putchar(backslash);
	}
	ft_putchar(enter);
}

void	middlerow(int col, int row, char enter, char asterix)
{
	char	space;
	int		col2;

	col2 = col;
	space = ' ';
	while (row > 2)
	{
		ft_putchar(asterix);
		if (col2 > 2)
		{
			while (col2 > 2)
			{
				ft_putchar(space);
				col2--;
			}
			col2 = col;
		}
		if (col2 > 1)
		{
			ft_putchar(asterix);
		}
		row--;
		ft_putchar(enter);
	}
}

void	bottomrow(int col, int row, char enter, char asterix)
{
	char	slash;
	char	backslash;
	int		col2;

	slash = 47;
	backslash = 92;
	ft_putchar(backslash);
	if (col > 2)
	{
		col2 = col;
		while (col2 > 2)
		{
			ft_putchar(asterix);
			col2--;
		}
	}
	if (col > 1)
	{
		ft_putchar(slash);
	}
	ft_putchar(enter);
}

void	rush(int col, int row)
{
	char	enter;
	char	asterix;

	enter = '\n';
	asterix = 42;
	if (col <= 0 || row <= 0)
	{
	}
	else
	{
		toprow(col, row, enter, asterix);
		if (row > 2)
		{
			middlerow(col, row, enter, asterix);
		}
		if (row > 1)
		{
			bottomrow(col, row, enter, asterix);
		}
	}
}
