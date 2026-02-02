/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:58:52 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/04 16:47:16 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <aio.h>
#include <unistd.h>
#include <stdlib.h>

static size_t	ft_trim(char const *s1, char const *set, size_t cnt)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1[cnt] == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*ft_fill(char *s1trm, const char *s1, size_t ini, size_t end)
{
	size_t	i;

	i = 0;
	while (ini <= end)
	{
		s1trm[i] = s1[ini];
		ini++;
		i++;
	}
	s1trm[i] = '\0';
	return (s1trm);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1trm;
	size_t	ini;
	size_t	end;

	ini = 0;
	if (ft_strlen(s1) == 0)
	{
		s1trm = malloc(1);
		s1trm[0] = '\0';
		return (s1trm);
	}
	end = ft_strlen(s1) - 1;
	while (s1[ini] && ft_trim(s1, set, ini))
		ini++;
	while (end > ini && ft_trim(s1, set, end))
		end--;
	s1trm = malloc((end - ini + 2) * sizeof(char));
	if (!s1trm)
		return (NULL);
	s1trm = ft_fill(s1trm, s1, ini, end);
	return (s1trm);
}
