/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:03:11 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/18 19:29:56 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	str_length;

	str_length = 0;
	while (*src != 0 && str_length < size)
	{
		*dest++ = *src++;
		str_length++;
	}
	if (str_length == size)
		--dest;
	*dest = '\0';
	while (*src != '\0')
	{
		str_length++;
		src++;
	}
	return (str_length);
}
