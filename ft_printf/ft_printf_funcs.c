/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:30:46 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/18 13:03:30 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* we need to convert the int value to a char (using the ft_itoa), since 
the function write uses a variable of type char to print. we also use free()
since our ft_itoa function used malloc to allocate the string created */

int	ft_printf_string(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf_integer(int number)
{
	int		length;
	char	*str;

	str = ft_itoa(number);
	length = ft_printf_string(str);
	free(str);
	return (length);
}


