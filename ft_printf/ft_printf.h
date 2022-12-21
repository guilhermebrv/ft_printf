/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:39:33 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/18 15:49:49 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str_format, ...);
int	ft_printf_char(char c);
int	ft_printf_string(char *str);
int	ft_printf_integer(int number);
int	ft_printf_unsigned_decimal(unsigned int number);
int	ft_printf_hex(unsigned int number, const char str);
int	ft_printf_pointer(unsigned long long number);

#endif