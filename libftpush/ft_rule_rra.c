/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:44:21 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_rra(int **stack, int stsz)//Shift down all
{
	int	a;
	int	temp;

	a = stsz - 1;
	if (stack[0][stsz - 2] == 0)
		return (0);
	temp = stack[0][a];
	while (a > 0 && stack[0][a - 1] != 0)
	{
		stack[0][a] = stack[0][a - 1];
		a--;
	}
	stack[0][a] = temp;
	if (PRINTRULE)
		write(1, "rra\n", 4);
	return (1);
}
