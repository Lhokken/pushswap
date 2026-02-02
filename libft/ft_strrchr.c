/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:16:19 by gcerrete          #+#    #+#             */
/*   Updated: 2025/11/27 16:17:25 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	unsigned int	i;
	unsigned char	t;
	int				p;

	i = 0;
	t = (unsigned char)c;
	p = -1;
	if (t == '\0')
	{
		while (str[i])
			i++;
		return (&str[i]);
	}
	while (str[i])
	{
		if ((unsigned char)str[i] == t)
		{
			p = i;
		}
		i++;
	}
	if (p >= 0)
		return (&str[p]);
	else
		return (0);
}
