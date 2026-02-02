/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:47:00 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_rrr(int **stack, int stsz)//Shift down all
{
	int	a;
	int	b;
	int	temp;

	a = stsz - 1;
	if (stack[0][stsz - 2] == 0)
		return (0);
	temp = stack[0][a];
	while (stack[0][a - 1] != 0 && a-- > 0)
		stack[0][a] = stack[0][a - 1];
	stack[0][a] = temp;
	b = stsz - 1;
	if (stack[1][stsz - 2] == 0)
		return (1);
	temp = stack[1][b];
	while (stack[1][b - 1] != 0 && b-- > 0)
		stack[1][b] = stack[1][b - 1];
	stack[1][b] = temp;
	if (PRINTRULE)
		write(1, "rrr\n", 4);
	return (1);
}
