/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:12:57 by gcerrete          #+#    #+#             */
/*   Updated: 2025/12/03 13:46:43 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	p;
	int		diff;

	diff = 0;
	p = 0;
	if ((!(s1[p]) && !(s2[p])) || n == 0)
		return (0);
	while ((s1[p] || s2[p]) && (p < n))
	{
		if ((s1[p] - s2[p]) != 0)
		{
			diff = (unsigned char)s1[p] - (unsigned char)s2[p];
			return (diff);
		}
		p++;
	}
	return (0);
}
