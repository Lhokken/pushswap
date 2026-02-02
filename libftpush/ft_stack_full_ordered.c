/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_full_ordered.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 13:00:41 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_stack_full_ordered(int *stack, int stsz)//non funziona
{
	while (stack[stsz] - stack[stsz - 1] == 1)
	{
		stsz--;
		if (stack[stsz] == 0 || stsz == 0)
			return (1);
	}
	return (0);
}
