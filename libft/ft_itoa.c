/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:57:49 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/05 18:42:44 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_num_length(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	length;
	unsigned int	number;

	length = ft_num_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	str[length] = '\0';
	while (number != 0)
	{
		str[length - 1] = (number % 10) + '0';
		number /= 10;
		length--;
	}
	return (str);
}

/* Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled. It returns 
the string representing the integer or NULL if the allocation fails.*/