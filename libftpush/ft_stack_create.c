/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/04 23:24:13 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

// static int	ft_space_count(int argc, char **argv)
// {
// 	int	i;
// 	int	j;
// 	int	spac;

// 	i = 0;
// 	j = 0;
// 	spac = 0;
// 	while (i < argc)
// 	{
// 		while (argv[i])
// 		{
// 			if (argv[i][j] == 32)
// 				spac++;
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (spac);
// }

int	*ft_stack_create(int argc, char **argv)
{
	int	i;
	int	*stack;

	i = 0;
	stack = malloc((argc - 1) * sizeof(int));
	if (!stack)
		return (NULL);
	while (i < argc - 1)
	{
		// while (ft_spac_check(argv[i]) > 0)
		// {
		// 	stack[i] = ft_argv_split(argv[i + 1]);
		// 	//i++;
		// }
		stack[i] = ft_atoi_long(argv[i + 1]);
		i++;
	}
	ft_stack_dup_ver(stack, argc - 1);
	return (stack);
}
