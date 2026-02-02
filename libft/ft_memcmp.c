/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:37:09 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/27 22:58:51 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*val1;
	const unsigned char	*val2;

	i = 0;
	val1 = s1;
	val2 = s2;
	while (i < n)
	{
		if ((val1[i] - val2[i]) != 0)
			return (val1[i] - val2[i]);
		i++;
	}
	return (0);
}
