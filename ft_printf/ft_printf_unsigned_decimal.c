/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:33:52 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/13 16:39:25 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length(unsigned int number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_unsigned(unsigned int number)
{
	char	*str;
	int		i;

	i = ft_length(number);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (number != 0)
	{
		str[i - 1] = number % 10 + 48;
		number = number / 10;
		i--;
	}
	return (str);
}

int	ft_printf_unsigned_decimal(unsigned int number)
{
	int		length;
	char	*str;

	if (number == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_itoa_unsigned(number);
	length = ft_printf_string(str);
	free(str);
	return (length);
}

/* Here I started by making a ft_itoa function for unsigned integers,
using an aux function (ft_length) to return the value of how many 
numbers we have in our unsigned int variable. Then we could use malloc
to allocate the numbers (int) converted to char in our string. */