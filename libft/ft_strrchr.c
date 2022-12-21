/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:09:09 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/03 19:48:55 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*str0;

	i = 0;
	str0 = (char *)str;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str0[i] == (unsigned char)c)
			return (&str0[i]);
		i--;
	}
	return (0);
}

/* The function locates the last occurrence of c (converted to a
char) in the string pointed to by str.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the 
function locates the terminating `\0'. It returns a pointer to the located
character, or NULL if the character does not appear in the string. */