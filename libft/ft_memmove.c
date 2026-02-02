/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:25:24 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/27 21:25:35 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*val1;
	const unsigned char	*val2;

	i = 0;
	val1 = dest;
	val2 = src;
	if (val1 < val2)
	{
		while (i < n)
		{
			val1[i] = val2[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			val1[n] = val2[n];
		}
	}
	return (dest);
}
