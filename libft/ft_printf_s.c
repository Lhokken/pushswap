/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/10 16:44:43 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_printf_s(char *c)
{
	int		i;
	char	d;

	i = 0;
	if (c == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (c[i])
	{
		d = c[i];
		write(1, &d, 1);
		i++;
	}
	return (i);
}
