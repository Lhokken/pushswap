/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_algo2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/05 16:04:07 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_print_algo2(int **stack, int sks, int sortarr[ROWS][COLS], int sts)
{
	if (PRINTALGO)
	{
		ft_printf("\n");
		ft_print_stacks(stack, sks);
		ft_print_search_array(sortarr, sts);
		ft_printf("---------------------------------------\n");
		getchar();
	}
}
