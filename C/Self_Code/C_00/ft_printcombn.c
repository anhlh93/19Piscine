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
