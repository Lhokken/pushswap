/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/02 18:43:58 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_ss(int **stack, int stsz)//Swap the first 2 el
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	if (stack[0][stsz - 2] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	temp = stack[0][a];
	stack[0][a] = stack[0][a + 1];
	stack[0][a + 1] = temp;
	while (stack[1][b] == 0 && b < stsz)
		b++;
	temp = stack[1][b];
	stack[1][b] = stack[1][b + 1];
	stack[1][b + 1] = temp;
	if (PRINTRULE)
		write(1, "ss\n", 3);
	return (1);
}
