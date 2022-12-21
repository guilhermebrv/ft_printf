/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:32:07 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/18 15:49:40 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_length(uintptr_t number)
{
	int	length;

	length = 0;
	while (number != 0)
	{
		number = number / 16;
		length++;
	}
	return (length);
}

void	ft_pointer(uintptr_t number)
{
	if (number >= 16)
	{
		ft_pointer(number / 16);
		ft_pointer(number % 16);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd(number + '0', 1);
		else
			ft_putchar_fd(number - 10 + 'a', 1);
	}
}

int	ft_printf_pointer(unsigned long long ptr)
{
	int	length;

	length = ft_printf_string("0x");
	if (ptr == 0)
		length += ft_printf_char('0');
	else
		ft_pointer(ptr);
		length += ft_ptr_length(ptr);
	return (length);
}