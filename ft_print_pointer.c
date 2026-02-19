/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 04:48:27 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 12:34:14 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_phex(unsigned long long n)
{
	char	*base;
	int		len;
	int		temp;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		temp = ft_print_phex(n / 16);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	if (ft_putchar(base[n % 16]) == -1)
		return (-1);
	return (len + 1);
}

int	ft_print_pointer(unsigned long long pointer)
{
	int	len;
	int	temp;

	len = 0;
	if (pointer == 0)
	{
		if (ft_print_string("(nil)") == -1)
			return (-1);
		return (5);
	}
	if (ft_print_string("0x") == -1)
		return (-1);
	len += 2;
	temp = ft_print_phex(pointer);
	if (temp == -1)
		return (-1);
	return (len + temp);
}
