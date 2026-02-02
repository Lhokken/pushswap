/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:12:50 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/04 17:03:07 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	s;
	size_t	t;

	s = 0;
	t = 0;
	if (to_find[0] == 0)
		return ((char *)(str));
	while (str[s] && s < len)
	{
		if (str[s] == to_find[t])
		{
			while ((str[s + t] == to_find[t]) && s + t < len)
			{
				if (to_find[t + 1] == '\0')
				{
					return ((char *)(str + s));
				}
				t++;
			}
			t = 0;
		}
		s++;
	}
	return (0);
}
