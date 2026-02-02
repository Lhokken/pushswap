/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/10 16:45:00 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_printf_p(void *p)
{
	int		i;
	char	*num;
	char	d;

	if (p == NULL)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	num = ft_itoa_hexpun((unsigned long long)p);
	if (!num)
		return (0);
	i = 0;
	write(1, "0x", 2);
	while (num[i])
	{
		d = num[i];
		write(1, &d, 1);
		i++;
	}
	free (num);
	return (i + 2);
}
