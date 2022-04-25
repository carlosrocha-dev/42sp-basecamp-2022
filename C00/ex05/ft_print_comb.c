/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 01:16:37 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/21 12:48:57 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int i, int j, int k);
void	ft_spin(int i, int j, int k);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_spin(int i, int j, int k)
{
	while (j <= 56)
	{
		ft_comb(i, j, k);
		k++;
		if (k > 57)
		{
			j++;
			k = j + 1;
		}
	}
}

void	ft_comb(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i < 55)
		write (1, ", ", 2);
	return ;
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		ft_spin(i, j, k);
		i++;
		k++;
		j++;
	}
}
000