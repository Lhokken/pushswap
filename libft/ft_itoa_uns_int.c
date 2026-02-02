/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uns_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:31:18 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/09 14:34:45 by gcerrete         ###   ########.fr       */
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
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_fill(char *numstr, unsigned long n, int siznum)
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

char	*ft_itoa_uns_int(unsigned int n)
{
	int				siznum;
	char			*numstr;
	unsigned long	nbr;

	if (n == 0)
		return (ft_n_zero());
	nbr = (unsigned long)n;
	siznum = ft_count_digits(nbr);
	numstr = malloc((siznum + 1) * sizeof(char));
	if (!numstr)
		return (NULL);
	numstr[siznum] = '\0';
	numstr = ft_fill(numstr, nbr, siznum);
	return (numstr);
}
