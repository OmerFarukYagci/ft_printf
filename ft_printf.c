/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 14:58:26 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/18 16:41:50 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		tmp;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			tmp = ft_formats(args, format[++i]);
		else
			tmp = ft_putchar(format[i]);
		if (tmp == -1)
		{
			va_end(args);
			return (-1);
		}
		len += tmp;
		i++;
	}
	va_end(args);
	return (len);
}
