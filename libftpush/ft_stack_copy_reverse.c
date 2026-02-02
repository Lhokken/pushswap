/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_copy_reverse.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 17:06:28 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	**ft_stack_copy_reverse(int **stack, int **stack2, int sksiz)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < sksiz)
	{
		while (j < sksiz)
		{
			if (stack[0][i] != stack2[0][j])
				j++;
			else
				break ;
		}
		stack[1][i] = stack2[1][j];
		i++;
		j = 0;
	}
	return (stack2);
}
