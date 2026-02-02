/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:53:45 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/02 18:03:49 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	char	c;
	int		i;

	i = 0;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
}
