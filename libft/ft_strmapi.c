/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:27:03 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/05 10:23:00 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*crpstr;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	crpstr = malloc((len + 1) * sizeof(char));
	if (crpstr == NULL)
		return (NULL);
	while (s[i])
	{
		crpstr[i] = f(i, s[i]);
		i++;
	}
	crpstr[i] = '\0';
	return (crpstr);
}
