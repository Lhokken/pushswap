/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:47:08 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_sa(int **stack, int stsz)//Swap the first 2 el
{
	int	a;
	int	temp;

	a = 0;
	if (stack[0][stsz - 2] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	temp = stack[0][a];
	stack[0][a] = stack[0][a + 1];
	stack[0][a + 1] = temp;
	if (PRINTRULE)
		write(1, "sa\n", 3);
	return (1);
}
