/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:48:45 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/18 19:54:17 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int un)
{
	int		len;
	int		tmp;

	len = 0;
	if (un > 9)
	{
		tmp = ft_print_unsigned(un / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (ft_putchar((un % 10) + '0') == -1)
		return (-1);
	return (len + 1);
}
