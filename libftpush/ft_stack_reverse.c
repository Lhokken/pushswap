/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 15:04:05 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_stack_reverse(int **stack, int stsz)
{
	int	count;
	int	min;
	int	i;

	count = 0;
	i = 0;
	min = stack[0][ft_first(stack[0], stsz)] - 1;
	while (stack[1][i] != min)
		i++;
	if ((i - ft_first(stack[1], stsz)) < (stsz - i))
		while (stack[1][ft_first(stack[1], stsz)] != min)
			count += ft_rule_rb(stack, stsz);
	else
		while (stack[1][ft_first(stack[1], stsz)] != min)
			count += ft_rule_rrb(stack, stsz);
	count += ft_rule_pa(stack, stsz);
	return (count);
}
