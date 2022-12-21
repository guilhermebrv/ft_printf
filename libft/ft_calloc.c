/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:01:52 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/03 21:51:45 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (void *)malloc(number * size);
	if (str == 0)
		return (0);
	while (i < number * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/* The calloc function allocates space for number objects, each size bytes
in length. The result is identical to calling malloc with an argument of 
number * size, with the exception that the allocated memory is explicitly 
initialized to zero bytes. It returns a	pointer	to the allocated memory if 
successful; otherwise a NULL pointer is returned.*/
