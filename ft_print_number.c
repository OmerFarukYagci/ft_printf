/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:54:50 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/18 17:06:44 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	long	lon;
	int		len;
	int		tmp;

	lon = n;
	len = 0;
	if (lon < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		lon = lon * -1;
		len++;
	}
	if (lon > 9)
	{
		tmp = ft_print_number(lon / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (ft_putchar((lon % 10) + '0') == -1)
		return (-1);
	return (len + 1);
}
