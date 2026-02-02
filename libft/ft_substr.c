/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:36:42 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/05 08:33:18 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <aio.h>

static char	*ft_lenzero(void)
{
	char	*subs;

	subs = malloc(1);
	if (!subs)
		return (NULL);
	subs[0] = '\0';
	return (subs);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((size_t)start >= slen)
		len = 0;
	if (len == 0)
		return (ft_lenzero());
	else if (len > (slen - (size_t)start))
		len = (slen - (size_t)start);
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
