/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:18:41 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/28 13:01:44 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpush.h"

int	ft_rule_path(int top, int numplace, int stsz)
{
	int	path1;
	int	pathup;
	int	pathdown;

	pathup = (numplace - top + 1);
	pathdown = (stsz - numplace + 1);
	if (pathup < pathdown)
		path1 = pathup;
	else
		path1 = pathdown;
	return (path1);
}
