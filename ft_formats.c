/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:53:04 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/18 19:48:16 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(args, int));
	if (format == 's')
		len += ft_print_string(va_arg(args, char *));
	if (format == 'd')
		len += ft_print_number(va_arg(args, int));
	if (format == 'i')
		len += ft_print_number(va_arg(args, int));
	if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));

	return (len);
}
