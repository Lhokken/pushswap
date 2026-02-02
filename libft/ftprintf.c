/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerrete <gcerrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:23:06 by gcerrete          #+#    #+#             */
/*   Updated: 2026/01/10 16:45:34 by gcerrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_print_select(int count, const char *format, \
	va_list *args, int *i)
{
	(*i)++;
	if (format[*i])
	{
		if (format[*i] == 'c')
			count += ft_printf_c((char)va_arg(*args, int));
		else if (format[*i] == 's')
			count += ft_printf_s(va_arg(*args, char *));
		else if (format[*i] == 'p')
			count += ft_printf_p((void *)va_arg(*args, void *));
		else if (format[*i] == 'd')
			count += ft_printf_d((int)va_arg(*args, int));
		else if (format[*i] == 'i')
			count += ft_printf_i((int)va_arg(*args, int));
		else if (format[*i] == 'u')
			count += ft_printf_u((unsigned int)va_arg(*args, unsigned int));
		else if (format[*i] == 'x')
			count += ft_printf_x((unsigned int)va_arg(*args, int));
		else if (format[*i] == 'X')
			count += ft_printf_xm((unsigned int)va_arg(*args, int));
		else if (format[*i] == '%')
			count += ft_printf_per();
		(*i)++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			count = ft_print_select(count, format, &args, &i);
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
