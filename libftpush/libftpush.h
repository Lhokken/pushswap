/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpush.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/02 19:04:42 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUSH_H
# define LIBFTPUSH_H
# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# define ROWS 3
# define COLS 40
# define PRINTRULE 0
# define PRINTOTALMOVES 1
# define PRINTORDSTACK 0
# define PRINTALGO 0

int		ft_free_ret(char *txt);
int		ft_stack_dup_ver(int *stack, int stsz);
int		*ft_stack_create(int stsz, char **argv);
int		*ft_stack_zero(int stsz);
void	ft_print_stacks(int **stack, int stsz);
void	ft_print_stacks_zero(int **stack, int stsz);
int		**ft_stack_copy(int **stack, int **stack2, int stsz);
int		**ft_stack_copy_reverse(int **stack, int **stack2, int setsiz);
int		*ft_stack_copy_single(int *stack, int *stack2, int stsz);
int		ft_stack_ordered(int *stack, int stsz);
int		ft_stack_full_ordered(int *stack, int stsz);
int		ft_rule_sa(int **stack, int stsz);
int		ft_rule_sb(int **stack, int stsz);
int		ft_rule_ss(int **stack, int stsz);
int		ft_rule_pa(int **stack, int stsz);
int		ft_rule_pb(int **stack, int stsz);
int		ft_rule_ra(int **stack, int stsz);
int		ft_rule_rb(int **stack, int stsz);
int		ft_rule_rr(int **stack, int stsz);
int		ft_rule_rra(int **stack, int stsz);
int		ft_rule_rrb(int **stack, int stsz);
int		ft_rule_rrr(int **stack, int stsz);
int		ft_first(int *stack, int stsz);
int		ft_minor_of_all(int *stack, int stsz, int num);
int		ft_num_place(int *stack, int stsz, int num);
int		ft_min_search(int *stack, int stsz, int top);
int		ft_num_rank(int *stack, int stsz, int num);
int		ft_rule_path(int top, int numplace, int stsz);
void	ft_zero_set_sortarr(int sortarr[ROWS][COLS]);
void	ft_min_set_sortarr(int sortarr[ROWS][COLS], \
		int **stack, int stsz, int setsiz);
int		ft_path_choice(int sortarr[ROWS][COLS], int setsiz);
int		ft_top_check(int stacktop, int sortarr[ROWS][COLS], int setsiz);
int		ft_stack_reverse(int **stack, int stsz);
void	ft_err_duplic(int **stack);
void	ft_free_stacks(int **stack, int **stack2);
int		ft_swap_check(int **stack, int stacksiz, int a_b);
void	ft_finalize(int **stack, int **stack2, int argc, int i);
void	ft_print_search_array(int sortarr[ROWS][COLS], int sts);
void	ft_print_algo(int **stack, int sks);
void	ft_print_algo2(int **stack, int sks, int sortarr[ROWS][COLS], int sts);
long	ft_atoi_long(const char *str);
long	ft_atoi_lg(const char *str);
void	ft_arg_validation(int argc, char **argv, int i, int j);

#endif
