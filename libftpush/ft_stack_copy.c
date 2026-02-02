/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 13:00:23 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	**ft_stack_copy(int **stack, int **stack2, int stsz)
{
	int	i;

	i = 0;
	stack2[0] = (int *)malloc((stsz) * sizeof(int));
	stack2[1] = (int *)malloc((stsz) * sizeof(int));
	while (i < stsz)
	{
		stack2[1][i] = stack[0][i];
		i++;
	}
	i = 0;
	while (i < stsz)
	{
		stack2[0][i] = ft_num_rank(stack[0], stsz, stack2[1][i]);
		i++;
	}
	return (stack2);
}
