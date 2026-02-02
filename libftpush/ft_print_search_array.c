/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_search_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 19:22:47 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_print_search_array(int sortarr[ROWS][COLS], int sts)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ROWS)
	{
		while (i < sts)
		{
			ft_printf("%d\t", sortarr[j][i]);
			i++;
		}
		ft_printf("\n");
		j++;
		i = 0;
	}
}
