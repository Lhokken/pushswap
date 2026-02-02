/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ordered.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 17:14:40 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_stack_ordered(int *stack, int stacksize)
{
	int	i;
	int	j;

	i = 0;
	while (stack[i] == 0)
		i++;
	j = i + 1;
	while (1)
	{
		if (stack[i] != stack[j] - 1)
			return (0);
		i++;
		j++;
		if (j == stacksize)
			return (1);
	}
}
