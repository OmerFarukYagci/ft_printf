/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 04:00:37 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 04:11:59 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexl(unsigned int n)
{
	char	*base;
	int		len;
	int		temp;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		temp = ft_print_hexl(n / 16);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	if (ft_putchar(base[n % 16]) == -1)
		return (-1);
	return (len + 1);
}
