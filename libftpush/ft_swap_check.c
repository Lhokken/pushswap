/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 16:12:16 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_swap_check(int **stack, int stacksiz, int a_b)
{
	if (stack[a_b][ft_first(stack[a_b], stacksiz)] \
		> stack[a_b][ft_first(stack[a_b], stacksiz) + 1] \
			&& stack[a_b][stacksiz - 2] != 0)
		return (1);
	else
		return (0);
}
