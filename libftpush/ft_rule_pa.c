/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:45:51 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_pa(int **stack, int stsz)//First b > first a
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	if (stack[1][stsz - 1] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	while (stack[1][b] == 0 && b < stsz)
		b++;
	a--;
	temp = stack[0][a];
	stack[0][a] = stack[1][b];
	stack[1][b] = temp;
	if (PRINTRULE)
		write(1, "pa\n", 3);
	return (1);
}
