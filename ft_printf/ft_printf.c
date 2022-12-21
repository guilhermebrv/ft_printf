/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:30:00 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/18 15:49:58 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_datatype(const char str, va_list args)
{
	int	length;

	length = 0;
	if (str == '%')
		length = ft_printf_char('%');
	else if (str == 'c')
		length = ft_printf_char(va_arg(args, int));
	else if (str == 's')
		length = ft_printf_string(va_arg(args, char *));
	else if (str == 'd' || str == 'i')
		length = ft_printf_integer(va_arg(args, int));
	else if (str == 'u')
		length = ft_printf_unsigned_decimal(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		length = ft_printf_hex(va_arg(args, unsigned int), str);
	else if (str == 'p')
		length = ft_printf_pointer(va_arg(args, unsigned long long));
	return (length);
}

int	ft_printf(const char *str_format, ...)
{
	va_list	args;
	int		i;
	int		length;

	if (str_format == NULL)
		return (0);
	i = 0;
	length = 0;
	va_start(args, str_format);
	while (str_format[i] != '\0')
	{
		if (str_format[i] == '%')
		{
			length += ft_printf_datatype(str_format[i + 1], args);
			i++;
		}
		else
			length += ft_printf_char(str_format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
