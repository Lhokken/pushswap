/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:26:48 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/28 15:47:24 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*val1;
	unsigned char	val2;

	i = 0;
	val1 = s;
	val2 = c;
	while (i < n)
	{
		val1[i] = val2;
		i++;
	}
	return (s);
}
