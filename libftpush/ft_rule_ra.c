/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:46:16 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_ra(int **stack, int stsz)//Shift up all
{
	int	a;
	int	temp;

	a = 0;
	if (stack[0][stsz - 1] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	temp = stack[0][a];
	while (a < stsz - 1)
	{
		stack[0][a] = stack[0][a + 1];
		a++;
	}
	stack[0][a] = temp;
	if (PRINTRULE)
		write(1, "ra\n", 3);
	return (1);
}
