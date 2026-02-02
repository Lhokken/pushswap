/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/10 16:45:18 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_printf_d(int p)
{
	int		i;
	char	*num;
	char	d;

	num = ft_itoa(p);
	if (!num)
		return (0);
	i = 0;
	while (num[i])
	{
		d = num[i];
		write(1, &d, 1);
		i++;
	}
	free (num);
	return (i);
}
