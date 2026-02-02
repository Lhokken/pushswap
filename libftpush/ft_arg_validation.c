/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/01 18:22:34 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"
#include <limits.h>

static int	ft_isdigital(int c)
{
	if (c != '\0' && (c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}

void	ft_arg_validation(int argc, char **argv, int i, int j)
{
	while (i < argc)
	{
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigital(argv[i][j]) == 0)
			{
				ft_printf("\nInvalid argument\n\n");
				exit (1);
			}
			if (ft_atoi_lg(argv[i]) < INT_MIN || ft_atoi_lg(argv[i]) > INT_MAX)
			{
				ft_printf("\nInvalid argument, too big number\n\n");
				exit (1);
			}
			j++;
		}
		i++;
		j = 0;
	}
}
