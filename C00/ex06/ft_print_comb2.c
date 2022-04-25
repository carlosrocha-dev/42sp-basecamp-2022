/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:22:14 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/09 15:40:06 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec(int dec1, int uni1, int dec2, int uni2)
{
	write(1, &dec1, 1);
	write(1, &uni1, 1);
	write(1, " ", 1);
	write(1, &dec2, 1);
	write(1, &uni2, 1);
	if (dec1 == 57 && uni1 == 56 && dec2 == 57 && uni2 == 57)
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_dec(a / 10 + 48, a % 10 + 48, b / 10 + 48, b % 10 + 48);
			b++;
		}
		a++;
	}
}
