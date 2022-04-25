/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:59:22 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/06 21:26:08 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	z;
	int	n;

	z = 48;
	n = 57;
	while (z <= n)
	{
		ft_putchar(z);
		z++;
	}
}
