/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:51:23 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/13 00:42:53 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	swap;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		swap = tab[i];
		tab[i] = tab[a];
		tab[a] = swap;
		i++;
		a--;
	}
}
