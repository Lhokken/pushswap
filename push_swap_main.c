/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/02 18:42:04 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftpush.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

static int	ft_push_to_b(int sort[ROWS][COLS], int sts, int **stack, int sks)
{
	int	count;

	count = 0;
	count += ft_rule_pb(stack, sks);
	if (ft_num_place(sort[0], sts, stack[1][ft_first(stack[1], sks)]) \
		> (sts / 3) && stack[1][sks - 3] != 0)
		count += ft_rule_rb(stack, sks);
	return (count);
}

//sortarr : <0-num><1-path>-<2-path_up_or_down> set ottimale da 7 a 13
//sks = altezza stack ---- sts = set array di ricerca
static int	ft_sort_stack(int **stack, int sks, int sts)
{
	int			sort[ROWS][COLS];
	static int	count;

	while (1)
	{
		ft_print_algo(stack, sks);
		ft_min_set_sortarr(sort, stack, sks, sts);
		if (ft_stack_ordered(stack[0], sks) == 1)
			count += ft_stack_reverse(stack, sks);
		else if (ft_swap_check(stack, sks, 0) == 1 && stack[1][sks - 2] != 0 \
			&& ft_swap_check(stack, sks, 1) == 0)
			count += ft_rule_ss(stack, sks);
		else if (ft_top_check(stack[0][ft_first(stack[0], sks)], sort, sts))
			count += ft_push_to_b(sort, sts, stack, sks);
		else if (ft_path_choice(sort, sts) == 0)
			while (!ft_top_check(stack[0][ft_first(stack[0], sks)], sort, sts))
				count += ft_rule_ra(stack, sks);
		else if (ft_path_choice(sort, sts) == 1)
			while (!ft_top_check(stack[0][ft_first(stack[0], sks)], sort, sts))
				count += ft_rule_rra(stack, sks);
		ft_print_algo2(stack, sks, sort, sts);
		if (ft_stack_ordered(stack[0], sks) == 1 && stack[0][0] != 0)
			break ;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	**stack;
	int	**stack2;
	int	i;
	int	setsiz;

	if (argc == 2)
		return (ft_printf("\nError single argument\n\n"));
	else if (argc < 2)
		return (0);
	ft_arg_validation(argc, argv, 1, 0);
	stack = malloc(2 * sizeof(int *));
	i = 0;
	setsiz = ((0.045 * ((argc - 1))) + 9.5);
	if (setsiz > 32)
		setsiz = 32;
	stack[0] = ft_stack_create(argc, argv);
	if (ft_stack_dup_ver(stack[0], argc - 1) == 1)
		ft_err_duplic(stack);
	stack[1] = ft_stack_zero(argc - 1);
	stack2 = malloc(2 * sizeof(int *));
	stack2 = ft_stack_copy(stack, stack2, argc - 1);
	stack[0] = ft_stack_copy_single(stack[0], stack2[0], argc - 1);
	i = ft_sort_stack(stack, argc - 1, setsiz);
	ft_finalize(stack, stack2, argc, i);
	return (0);
}
