/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:33:00 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/04 16:51:51 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdint.h>

void	*ft_calloc(size_t n, size_t s)
{
	void	*numbarray;

	if (n == 0 || s == 0)
	{
		numbarray = malloc(0);
		return (numbarray);
	}
	if (s > SIZE_MAX / n)
		return (NULL);
	numbarray = malloc(n * s);
	if (!numbarray)
		return (NULL);
	ft_memset(numbarray, 0, (n * s));
	return (numbarray);
}
