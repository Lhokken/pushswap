/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:31:18 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/12 13:46:21 by gcerrete         ###   ########.fr       */
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
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
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
	siznum--;
	while (n > 0)
	{
		numstr[siznum] = (n % 10 + 48);
		n = n / 10;
		siznum--;
	}
	return (numstr);
}

char	*ft_itoa(int n)
{
	int		siznum;
	char	*numstr;
	long	nbr;

	nbr = n;
	siznum = ft_count_digits(nbr);
	if (nbr < 0)
		siznum++;
	numstr = malloc((siznum + 1) * sizeof(char));
	if (!numstr)
		return (NULL);
	numstr[siznum] = '\0';
	if (n == 0)
	{
		numstr[0] = '0';
		return (numstr);
	}
	if (n < 0)
		ft_n_neg(numstr, &nbr);
	numstr = ft_fill(numstr, nbr, siznum);
	return (numstr);
}
