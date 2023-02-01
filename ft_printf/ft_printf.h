/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:39:33 by gubranco          #+#    #+#             */
/*   Updated: 2023/02/01 17:04:19 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DEC "0123456789"
# define HX_UPP "0123456789ABCDEF"
# define HX_LOW "0123456789abcdef"
# include "../libft/libft.h"
# include <stdarg.h>

int			ft_printf(const char *str_format, ...);
int			ft_printf_integer(int number);
int			ft_printf_string(char *s, char c, int n);
int			ft_number(unsigned long int n, unsigned long int x, char *base);
int			ft_printf_ptr(void *ptr);

#endif