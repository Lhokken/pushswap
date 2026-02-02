/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 13:01:50 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_print_stacks_zero(int **stack, int stsz)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stsz)
	{
		while (j < 2)
		{
			ft_printf("%d\t", stack[j][i]);
			j++;
		}
		ft_printf("\n");
		j = 0;
		i++;
	}
	ft_printf("-\t-\nStack A\tStack B\n\n\n");
}
