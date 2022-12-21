/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:42 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/18 13:02:13 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned int number)
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

void	ft_hex(unsigned int number, const char str)
{
	if (number >= 16)
	{
		ft_hex(number / 16, str);
		ft_hex(number % 16, str);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd((number + '0'), 1);
		else
		{
			if (str == 'x')
				ft_putchar_fd((number - 10 + 'a'), 1);
			else if (str == 'X')
				ft_putchar_fd((number - 10 + 'A'), 1);
		}
	}
}

int	ft_printf_hex(unsigned int number, const char str)
{
	if (number == 0)
		return (ft_printf_char('0'));
	else
		ft_hex(number, str);
	return (ft_hex_length(number));
}
