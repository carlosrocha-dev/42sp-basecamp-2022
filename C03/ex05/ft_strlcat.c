/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 05:47:41 by caalbert          #+#    #+#             */
/*   Updated: 2022/04/20 17:52:32 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[j] != '\0')
		j++;
	while (dest[k] && 1 < size)
		k++;
	i = k;
	while (src[k - i] && (k + i) < size)
	{
		dest[k] = src[k - i];
		k++;
	}
	if (k < size)
		dest[k] = '\0';
	return (i + j);
}
