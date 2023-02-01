/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:30:00 by gubranco          #+#    #+#             */
/*   Updated: 2023/02/01 17:03:07 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function takes a single char argument c and writes it to the standard 
output using the write function. The function returns 1, the number of 
characters written. */
int	ft_printf_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/* This function takes a string s and a single character c, and an integer n.
If n is not 0 (which is the case for the single digits), it writes the character 
c to the standard output using write and returns 1, the number of characters 
written. If s is NULL, it writes the string "(null)" to the standard output and
returns 6 (its length). If s is not NULL, it writes each character of s in a
loop to the standard output and returns the length of the total string. */
int	ft_printf_string(char *s, char c, int n)
{
	int	i;

	i = 0;
	if (n)
		return (write(1, &c, 1));
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

/* This function takes a character str and a va_list argument args. It uses 
va_arg to get the argument for each supported format specifier and call the 
corresponding function to make the conversions and print the argument. The 
function then returns the length of the string representation of the data
type specified by str, which is stored in variable length. */
int	ft_printf_datatype(const char str, va_list args)
{
	int		length;

	length = 0;
	if (str == '%')
		length = ft_printf_char('%');
	else if (str == 'c')
		length = ft_printf_char(va_arg(args, int));
	else if (str == 's')
		length = ft_printf_string(va_arg(args, char *), 0, 0);
	else if (str == 'd' || str == 'i')
		length = ft_printf_integer(va_arg(args, int));
	else if (str == 'u')
		length = ft_number(va_arg(args, unsigned int), 10, DEC);
	else if (str == 'x')
		length = ft_number(va_arg(args, unsigned int), 16, HX_LOW);
	else if (str == 'X')
		length = ft_number(va_arg(args, unsigned int), 16, HX_UPP);
	else if (str == 'p')
		length = ft_printf_ptr(va_arg(args, void *));
	return (length);
}

/* ft_printf is the main that implements the printf behavior. It loops 
over the format string, checks if a format specifier is encountered (%), 
and calls the ft_printf_datatype function to check the formatting and 
write the corresponding argument to the standard output. The number of
characters written is returned.*/
int	ft_printf(const char *str_format, ...)
{
	va_list	args;
	int		i;
	int		length;

	if (!str_format)
		return (0);
	i = 0;
	length = 0;
	va_start(args, str_format);
	while (str_format[i])
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
