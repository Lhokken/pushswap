/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:46:51 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_rrb(int **stack, int stsz)//Shift down all
{
	int	b;
	int	temp;

	b = stsz - 1;
	if (stack[1][stsz - 2] == 0)
		return (1);
	temp = stack[1][b];
	while (b > 0 && stack[1][b - 1] != 0)
	{
		stack[1][b] = stack[1][b - 1];
		b--;
	}
	stack[1][b] = temp;
	if (PRINTRULE)
		write(1, "rrb\n", 4);
	return (1);
}
