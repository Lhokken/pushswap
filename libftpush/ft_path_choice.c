/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_choice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/31 16:44:14 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_path_choice(int sort[ROWS][COLS], int setsiz)
{
	int	i;
	int	path;

	i = 0;
	path = sort[1][0];
	while (i < setsiz)
	{
		if (path > sort[1][i])
			path = sort[1][i];
		i++;
	}
	i = 0;
	while (i < setsiz)
	{
		if (sort[1][i] == path)
			return (sort[2][i]);
		i++;
	}
	return (0);
}
