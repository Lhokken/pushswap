/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_dup_ver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 12:58:41 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_stack_dup_ver(int *stack, int stsz)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stsz)
	{
		while (j < stsz)
		{
			if (stack[i] == stack[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
