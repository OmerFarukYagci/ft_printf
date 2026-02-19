/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 14:58:26 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 18:30:04 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		tmp;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			tmp = ft_formats(args, *(++format));
		else
			tmp = ft_putchar(*format);
		if (tmp == -1)
		{
			va_end(args);
			return (-1);
		}
		len += tmp;
		if (*format != '\0')
			format++;
	}
	va_end(args);
	return (len);
}
