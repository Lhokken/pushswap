/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finalize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 16:14:40 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_finalize(int **stack, int **stack2, int argc, int i)
{
	ft_stack_copy_reverse(stack, stack2, argc - 1);
	if (PRINTORDSTACK)
		ft_print_stacks_zero(stack, argc - 1);
	if (PRINTOTALMOVES)
		ft_printf("<moves %d>\n\n\n", i);
	ft_free_stacks(stack, stack2);
}
