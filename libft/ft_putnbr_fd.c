/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:22:41 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/05 08:34:25 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

static void	extnum(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	j;

	j = 0;
	if (n == -2147483648 || n == 0)
		extnum(n, fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			j = (n % 10) + 48;
			write(fd, &j, 1);
		}
		if (n < 10)
		{
			j = n + 48;
			write(fd, &j, 1);
		}
	}
}
