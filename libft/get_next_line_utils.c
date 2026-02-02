/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_txt_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:03:29 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/18 22:15:51 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_line_add(char	*line, char	*buffer)
{
	size_t	i;
	size_t	j;
	char	*tmp_line;

	i = 0;
	j = 0;
	tmp_line = (char *)malloc((ft_line_lenght(line) + \
		ft_line_lenght(buffer) + 1) * sizeof(char));
	if (!tmp_line)
		return (NULL);
	while (line != NULL && line[i])
	{
		tmp_line[i] = line[i];
		i++;
	}
	while (buffer[j])
	{
		tmp_line[i] = buffer[j];
		i++;
		j++;
	}
	tmp_line[i] = '\0';
	free (line);
	return (tmp_line);
}

ssize_t	ft_endline_search(char *text)
{
	size_t	i;

	i = 0;
	if (text == NULL)
		return (-1);
	while (text[i])
	{
		if (text[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_line_lenght(char	*line)
{
	size_t	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
		i++;
	return (i);
}

char	*ft_line_cut(char *line)
{
	size_t	i;
	size_t	j;
	char	*tmp_line;

	i = 0;
	j = 0;
	while (line[i] && line[i] != '\n')
		i++;
	tmp_line = (char *)malloc((i + 2) * sizeof(char));
	if (!tmp_line)
		return (NULL);
	while (j <= i)
	{
		tmp_line[j] = line[j];
		j++;
	}
	tmp_line[j] = '\0';
	free (line);
	return (tmp_line);
}

char	*ft_line_last(char *line)
{
	size_t	i;
	size_t	j;
	char	*last;

	i = 0;
	j = 0;
	while (line[i] != '\n' && line[i])
		i++;
	j = i + 1;
	while (line[i])
		i++;
	last = (char *)malloc((i - j + 1) * sizeof(char));
	if (!last)
		return (NULL);
	i = 0;
	while (line[j])
	{
		last[i] = line[j];
		i++;
		j++;
	}
	last[i] = '\0';
	return (last);
}
