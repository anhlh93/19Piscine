#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

void	ft_print(int nb, int *tab, int pos)
{
	int	i;

	if pos == 1:
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while i < nb:
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_next(int n, int *tab)
{
	int	i;
	
}

void	ft_print_combn(int n)
{
	int	i;
	char	tab[10];

	i = 0;
	while i < n:
	{
		tab[i] = i;
		i++;
	}
	ft_print(n, tab, 0);
	while (tab[0] != 10 - n || tab[i] != 9):
	{
		if tab[i] != 9:
			tab[i] += 1
		else:
			ft_next(n, tab)
		ft_print(n, tab, 1)
	}  
}

int	main(void)
{
	ft_print_combn(3)
	return (0)
}

/*
** Sub function: ft_putchar; 
** Run loop from 0 to n. For example: 012, 013,.,789
** Solution: create a list "tab" with 10 numbers, data type char.
** Create the first number (example: 0123 with n = 4). Print the number
** For the rest numbers, print "," then the number; 
** Run loop until tab[0] = 10 - n and tab[i] = 9; (ex n=4 6789)
** During the loop, if tab[i] (final character or n - 1) != 9, print.
** Sub - print function: add a parameter to identify print with or without ","
** Again loop, if tab[i] = 9  
*/
