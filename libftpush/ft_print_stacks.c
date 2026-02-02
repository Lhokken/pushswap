/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/30 16:11:45 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_print_stacks(int **stack, int stsz)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stsz)
	{
		while (j < 2)
		{
			if (stack[j][i] != 0)
				ft_printf("%d\t", stack[j][i]);
			else
				ft_printf("\t");
			j++;
		}
		ft_printf("\n");
		j = 0;
		i++;
	}
	ft_printf("-\t-\nStack A\tStack B\n\n\n");
}
