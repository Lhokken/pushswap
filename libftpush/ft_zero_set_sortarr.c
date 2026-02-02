/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_set_sortarr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/29 16:22:09 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

void	ft_zero_set_sortarr(int sortarr[ROWS][COLS])
{
	int	i;

	i = 0;
	while (i < COLS)
	{
		sortarr[0][i] = 0;
		sortarr[1][i] = 0;
		sortarr[2][i] = 0;
		i++;
	}
}
