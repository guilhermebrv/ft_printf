/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:32:07 by gubranco          #+#    #+#             */
/*   Updated: 2023/02/01 17:06:22 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* This function takes an integer argument number and converts it to a string
using ft_itoa. The resulting string is then passed to ft_printf_string to print
the string. Finally, the memory used by the string is freed using free and
the length of the string is returned. */
int	ft_printf_integer(int number)
{
	int		length;
	char	*str;

	str = ft_itoa(number);
	length = ft_printf_string(str, 0, 0);
	free(str);
	return (length);
}

/* This function takes an unsigned int n, a base number x, and a string base
representing the characters used to represent digits. It works by dividing 
n by x repeatedly until the result is less than x. The last result is the 
least significant digit of the number. Each division result is then passed 
to the function again with x and base unchanged, until n becomes less than x. 
Then, it calls ft_printf_string with the corresponding character from base 
for each division result to print each digit. In the end, returns the length
of the string representation of the number in the given base. */
int	ft_number(unsigned long int n, unsigned long int x, char *base)
{
	int		length;

	length = 0;
	if (n >= x)
		length += ft_number(n / x, x, base);
	length += ft_printf_string(NULL, base[n % x], 1);
	return (length);
}

/* This function takes a void pointer and it starts by printing the
string "0x" using ft_printf_string. Then it converts the pointer to
an unsigned long integer and passes it to ft_number to do the conversions
and print the address in hx, returning the length of the string written. */
int	ft_printf_ptr(void *ptr)
{
	int	length;

	length = ft_printf_string("0x", 0, 0);
	length += ft_number((unsigned long int)ptr, 16, HX_LOW);
	return (length);
}
