/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_others.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:48:01 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 22:17:09 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_others(const char c)
{
	if (c == '\0')
	{
		return (0);
	}
	if ((ft_putchar('%') == -1) || (ft_putchar(c) == -1))
		return (-1);
	return (2);
}
