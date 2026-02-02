/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:24:30 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/27 22:58:42 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*val1;
	const unsigned char	*val2;

	i = 0;
	val1 = dest;
	val2 = src;
	while (i < n)
	{
		val1[i] = val2[i];
		i++;
	}
	return (dest);
}
