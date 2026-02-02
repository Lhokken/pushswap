/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:50:46 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/29 17:08:05 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <aio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	newstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		newstr[j] = s2[i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
