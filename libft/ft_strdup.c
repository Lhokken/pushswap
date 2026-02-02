/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:34:10 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/27 19:27:00 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
