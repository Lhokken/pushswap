/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_lg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/02/01 17:59:43 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

long	ft_atoi_lg(const char *str)
{
	int		i;
	long	nbr;
	long	sign;

	nbr = 0;
	sign = 1;
	i = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = sign * -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = ((str[i] - 48) + (nbr * 10));
		i++;
	}
	return (nbr * sign);
}
