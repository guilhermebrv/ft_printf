/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:32:53 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/03 18:53:35 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str0;

	i = 0;
	str0 = (char *)str;
	while (str0[i] != '\0')
	{
		if (str0[i] == (unsigned char)c)
			return (&str0[i]);
		i++;
	}
	if (c == '\0')
		return (&str0[i]);
	return (0);
}

/* The function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the 
function locates the terminating `\0'. It returns a pointer to the located
character, or NULL if the character does not appear in the string. */