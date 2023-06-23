/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:55:19 by aletorre          #+#    #+#             */
/*   Updated: 2023/06/19 10:57:39 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
void	ft_writestr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_ptrlen(unsigned long num);
void	ft_put_ptr(unsigned long number);
int		ft_print_ptr(unsigned long ptr);
int		ft_len(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_hexadecimal_len(unsigned int num);
void	ft_put_hexadecimal(unsigned int num, const char format);
int		ft_print_hexadecimal(unsigned int num, const char format);
int		ft_printf(const char *format, ...);

#endif