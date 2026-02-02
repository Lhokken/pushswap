/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 17:46:04 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_pb(int **stack, int stsz)//First a > first b
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	if (stack[0][stsz - 3] == 0)
		return (0);
	while (stack[0][a] == 0 && a < stsz)
		a++;
	while (stack[1][b] == 0 && b < stsz)
		b++;
	b--;
	temp = stack[1][b];
	stack[1][b] = stack[0][a];
	stack[0][a] = temp;
	if (PRINTRULE)
		write(1, "pb\n", 3);
	return (1);
}
