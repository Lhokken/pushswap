/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_HEX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:31:18 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/07 19:24:20 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

static int	ft_count_digits(long n)
{
	int	len;

	len = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static void	ft_n_neg(char *numstr, long *nbr)
{
	numstr[0] = '-';
	*nbr = -*nbr;
}

static char	*ft_fill(char *numstr, long n, int siznum)
{
	char	*hexset;
	int		i;

	i = 0;
	hexset = "0123456789ABCDEF";
	siznum--;
	while (n > 0)
	{
		i = n;
		while (i > 300000)
			i = i - 160000;
		while (i > 3000)
			i = i - 1600;
		while (i > 16)
			i = i - 16;
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

char	*ft_itoa_hexm(int n)
{
	int		siznum;
	char	*numstr;
	long	nbr;

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
	if (n < 0)
		ft_n_neg(numstr, &nbr);
	numstr = ft_fill(numstr, nbr, siznum);
	return (numstr);
}
