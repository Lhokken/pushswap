/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:49:09 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/04 16:50:17 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static char	**ft_arrfree(char **srt_arr, size_t i)
{
	while (i > 0)
	{
		free(srt_arr[i]);
		i--;
	}
	free(srt_arr);
	return (NULL);
}

static size_t	split_count(char const *s, char c)
{
	size_t	i;
	size_t	splitnum;

	i = 0;
	splitnum = 0;
	while (s[i])
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		if (s[i] != '\0')
			splitnum++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
	}
	return (splitnum);
}

static size_t	ft_stlen(char const *s, char c, size_t j)
{
	int	i;

	i = j;
	while (s[j] != c && s[j] != '\0')
		(j)++;
	return (j - i);
}

static char	*ft_fill(char *srt, const char *s, char c, size_t *j)
{
	size_t	i;

	i = 0;
	while (s[*j] != c && s[*j])
	{
		srt[i] = s[*j];
		i++;
		(*j)++;
	}
	srt[i] = '\0';
	return (srt);
}

char	**ft_split(char const *s, char c)
{
	size_t	stlen;
	size_t	splitnum;
	char	**srt_arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	splitnum = split_count(s, c);
	srt_arr = malloc((splitnum + 1) * (sizeof(char *)));
	if (!srt_arr)
		return (NULL);
	while (i < splitnum)
	{
		while (s[j] == c)
			j++;
		stlen = ft_stlen(s, c, j);
		srt_arr[i] = malloc((stlen + 1) * sizeof(char));
		if (!srt_arr[i])
			return (ft_arrfree(srt_arr, i));
		srt_arr[i] = ft_fill(srt_arr[i], s, c, &j);
		i++;
	}
	srt_arr[i] = NULL;
	return (srt_arr);
}
