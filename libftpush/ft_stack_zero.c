/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 13:04:37 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	*ft_stack_zero(int stsz)
{
	int	i;
	int	*stack;

	i = 0;
	stack = (int *)malloc((stsz + 1) * sizeof(int));
	while (i <= stsz)
	{
		stack[i] = 0;
		i++;
	}
	i = 0;
	return (stack);
}
