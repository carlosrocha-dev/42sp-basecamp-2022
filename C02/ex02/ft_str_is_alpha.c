/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 04:19:20 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/19 20:31:03 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verificando o alpha nulo com ascii*/
int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
