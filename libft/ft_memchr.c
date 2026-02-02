/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:36:15 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/29 14:39:11 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		val;
	const unsigned char	*p;

	i = 0;
	val = c;
	p = s;
	while (i < n)
	{
		if (p[i] == val)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
