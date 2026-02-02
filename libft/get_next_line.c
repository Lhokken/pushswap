/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:00:28 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/03 12:00:28 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*last;
	char		*line;
	ssize_t		bytnm;

	line = NULL;
	bytnm = 1;
	if (last)
	{
		line = ft_line_add(line, last);
		free (last);
		last = NULL;
	}
	while (ft_endline_search(line) == -1 && bytnm > 0)
	{
		bytnm = read (fd, buffer, BUFFER_SIZE);
		if (bytnm <= 0)
			break ;
		buffer[bytnm] = '\0';
		line = ft_line_add(line, buffer);
	}
	if (ft_endline_search(line) == -1)
		return (line);
	last = ft_line_last(line);
	return (ft_line_cut(line));
}
