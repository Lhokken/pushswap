/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_set_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 16:45:01 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

static void	ft_min_set_sortarr_fill(int sort[ROWS][COLS], int **stack, \
		int stsz, int setsiz)
{
	int	i;
	int	top;

	i = 1;
	top = ft_first(stack[0], stsz);
	while (i < setsiz)
	{
		sort[0][i] = sort[0][i - 1];
		while (sort[0][i] == sort[0][i - 1] \
			|| (int)ft_num_place(stack[1], stsz, sort[0][i]) != -1)
			sort[0][i]++;
		if (sort[0][i] > (stsz - 4))
			while (i < setsiz)
				sort[0][i++] = 0;
		sort[1][i] = ft_rule_path(top, ft_num_place(stack[0], \
				stsz, sort[0][i]), stsz);
		if ((ft_num_place(stack[0], stsz, sort[0][i]) - top) \
			< ((stsz - top) / 2) + 1)
			sort[2][i] = 0;
		else
			sort[2][i] = 1;
		i++;
	}
}

//sort : <0-num><1-path>-<2-path_up_or_down>
void	ft_min_set_sortarr(int sort[ROWS][COLS], int **stack, \
		int stsz, int setsiz)
{
	int	i;
	int	top;

	i = 1;
	ft_zero_set_sortarr (sort);
	top = ft_first(stack[0], stsz);
	sort[0][0] = ft_min_search(stack[0], stsz, top);
	sort[1][0] = ft_rule_path(top, ft_num_place(stack[0], \
			stsz, sort[0][0]), stsz);
	if ((ft_num_place(stack[0], stsz, sort[0][0]) - top) \
		< ((stsz - top) / 2) + 1)
		sort[2][0] = 0;
	else
		sort[2][0] = 1;
	ft_min_set_sortarr_fill(sort, stack, \
		stsz, setsiz);
}
