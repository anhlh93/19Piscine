/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:31:32 by hle               #+#    #+#             */
/*   Updated: 2022/11/09 15:32:27 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (void)
{
	int	i;
	int *tab;
	int length;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
}
