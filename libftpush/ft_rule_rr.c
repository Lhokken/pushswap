/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:46:44 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_rr(int **stack, int stsz)//Shift up all
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	if (stack[0][stsz - 1] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	temp = stack[0][a];
	while (a++ < stsz - 1)
		stack[0][a] = stack[0][a + 1];
	stack[0][a] = temp;
	b = 0;
	if (stack[1][stsz - 1] == 0)
		return (0);
	while (stack[1][b] == 0 && b < stsz)
		b++;
	temp = stack[1][b];
	while (b++ < stsz - 1)
		stack[1][b] = stack[1][b + 1];
	stack[1][b] = temp;
	if (PRINTRULE)
		write(1, "rr\n", 3);
	return (1);
}
