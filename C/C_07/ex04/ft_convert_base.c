/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:09:24 by hle               #+#    #+#             */
/*   Updated: 2022/11/10 15:56:58 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{	
		if (base[i] <= 32 || base[i] == '-' || base[i] == '+' || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base_test(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_start(char *str, int *i)
{
	int	mult;

	mult = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			mult *= -1;
		*i += 1;
	}
	return (mult);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nb;
	int		tmp;
	int		len;

	len = ft_atoi_base_error(base);
	if (len >= 2)
	{
		nb = 0;
		i = 0;
		sign = ft_atoi_base_start(str, &i);
		tmp = ft_atoi_base_test(str[i], base);
		while (tmp != -1)
		{
			nb = (nb * len) + tmp;
			i++;
			tmp = ft_atoi_base_test(str[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		lenght_nbrf;
	char	*d;

	if (ft_atoi_base_error(base_to) == 0 || ft_atoi_base_error(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(mednbr, base_to, 0);
	finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1));
	if (finalnbr == NULL)
		return (0);
	ft_putnbr_base(mednbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}

/*
int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}
*/
