/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:13:05 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/06 12:00:49 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words_number(char const *s, char c)
{
	size_t	number;
	size_t	word;

	number = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			word = 0;
		else if ((*s != c) && (word == 0))
		{
			word = 1;
			number++;
		}
		s++;
	}
	return (number);
}

static size_t	ft_strlen_c(const char *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	return (size);
}

static char	**ft_words_split(char **array, const char *s, char c)
{
	int	i;
	int	size;

	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			size = ft_strlen_c(s, c);
			array[i] = (char *)ft_calloc(size + 1, sizeof(char));
			if (array[i] == NULL)
				return (NULL);
			ft_memcpy(array[i], s, (size_t)size);
			s += size;
			i++;
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (s == 0)
		return (0);
	array = (char **)ft_calloc(ft_words_number(s, c) + 1, sizeof(char *));
	if (array == NULL)
		return (NULL);
	array = ft_words_split(array, s, c);
	return (array);
}

/* Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter.  The array must end
with a NULL pointer. It returns the array of new strings resulting from 
the split or NULL if the allocation fails. 

Using ft_words_number to count how many blocks of words there are 
between the c(s - if there is more than one), ft_strlen_c to know
in which position we can find the char c, to discover the word length
 - or if we reach a null character before that ('\0') and finally 
ft_words_split in order to split the string into an array of strings. */