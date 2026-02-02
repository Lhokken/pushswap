/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minor_of_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 12:58:08 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_minor_of_all(int *stack, int stsz, int num)
{
	int	i;

	i = ft_first(stack, stsz);
	while (i < stsz)
	{
		if (num > stack[i])
			return (0);
		i++;
		if (i == stsz)
			return (1);
	}
	return (0);
}
