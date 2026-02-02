/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/01 17:57:15 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	*ft_stack_create(int argc, char **argv)
{
	int		i;
	int		*stack;

	i = 0;
	stack = malloc((argc - 1) * sizeof(int));
	if (!stack)
		return (NULL);
	while (i < argc - 1)
	{
		stack[i] = ft_atoi_long(argv[i + 1]);
		i++;
	}
	ft_stack_dup_ver(stack, argc - 1);
	return (stack);
}
