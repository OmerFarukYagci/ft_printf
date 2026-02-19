/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 04:48:27 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/19 05:03:46 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long pointer)
{
	int	len;

	len = 0;
	if (pointer == 0)
	{
		if (ft_print_string("(nil)") == -1)
			return (-1);
		return (5);
	}
	
}
