/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:31:18 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/12 17:17:34 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

static int	ft_count_digits(unsigned long n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static char	*ft_fill(char *numstr, unsigned long n, int siznum)
{
	char	*hexset;
	int		i;

	hexset = "0123456789abcdef";
	i = 0;
	numstr[siznum] = '\0';
	siznum--;
	while (n > 0)
	{
		i = n % 16;
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

char	*ft_itoa_hex(unsigned long n)
{
	int				siznum;
	char			*numstr;
	unsigned long	nbr;

	if (n == 0)
		return (ft_n_zero());
	nbr = n;
	siznum = ft_count_digits(nbr);
	if (nbr < 0)
		siznum++;
	numstr = malloc((siznum + 1) * sizeof(char));
	if (!numstr)
		return (NULL);
	numstr[siznum] = '\0';
	numstr = ft_fill(numstr, nbr, siznum);
	return (numstr);
}
