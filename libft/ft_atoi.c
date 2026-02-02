/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:16:48 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/03 11:14:31 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

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
