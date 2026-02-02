/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:48:11 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_sb(int **stack, int stsz)//Swap the first 2 el
{
	int	b;
	int	temp;

	b = 0;
	if (stack[1][stsz - 2] == 0)
		return (0);
	while (stack[1][b] == 0 && b < stsz)
		b++;
	temp = stack[1][b];
	stack[1][b] = stack[1][b + 1];
	stack[1][b + 1] = temp;
	if (PRINTRULE)
		write(1, "sb\n", 3);
	return (1);
}
