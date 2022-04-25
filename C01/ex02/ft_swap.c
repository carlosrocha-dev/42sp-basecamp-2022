/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:28:41 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/15 17:15:05 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
#include <unistd.io>

int main(void)
{
	 int *a;
	 int *b;
	 int *c;
	 
	 a = "sjdlkfjsdlf";
	 b = "iuoqweroqipwe";
	 
	 c = ft_swap(*a, *b);
	 write (1, &c, 13);
	 
}