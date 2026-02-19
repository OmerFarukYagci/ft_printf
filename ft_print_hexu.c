/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 04:15:06 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 04:20:36 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexu(unsigned int n)
{
	char	*base;
	int		len;
	int		temp;

	base = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
	{
		temp = ft_print_hexu(n / 16);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	if (ft_putchar(base[n % 16]) == -1)
		return (-1);
	return (len + 1);
}
