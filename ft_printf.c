/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 14:58:26 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/17 15:57:20 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_formats(args, format[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
