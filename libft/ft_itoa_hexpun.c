/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexpun.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:31:18 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/07 19:22:49 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

static int	ft_count_digits(unsigned long long n)
{
	unsigned long long	len;

	len = 0;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static char	*ft_fill(char *numstr, unsigned long long n, unsigned long siznum)
{
	char				*hexset;
	unsigned long long	i;

	i = 0;
	hexset = "0123456789abcdef";
	siznum--;
	while (n > 0)
	{
		i = n;
		i = i % 16;
		numstr[siznum] = hexset[i];
		n = n / 16;
		siznum--;
	}
	return (numstr);
}

static char	*ft_n_zero(void)
{
	char	*numstr;

	numstr = malloc(2 * sizeof(char));
	if (!numstr)
		return (NULL);
	numstr[0] = '0';
	numstr[1] = '\0';
	return (numstr);
}

char	*ft_itoa_hexpun(unsigned long long n)
{
	unsigned long		siznum;
	char				*numstr;
	unsigned long long	nbr;

	if (n == 0)
		return (ft_n_zero());
	nbr = n;
	siznum = ft_count_digits(nbr);
	numstr = malloc((siznum + 1) * sizeof(char));
	if (!numstr)
		return (NULL);
	numstr[siznum] = '\0';
	numstr = ft_fill(numstr, nbr, siznum);
	return (numstr);
}
