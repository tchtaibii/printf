/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:11 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 15:41:37 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printcent(char c, va_list arguments)
{
    if(c == 'c')
        ft_putchar(va_arg(arguments, int));
    if(c == 's')
        ft_putstr(va_arg(arguments, char*));
    if(c == 'p')
    {
        t_putstr("0x");
        ft_printhexlow(va_arg(arguments,int));
    }
    if(c == 'd' || c == 'i')
        ft_putnbr(va_arg(arguments, int));
    if(c == 'u')
    ft_putnbr((unsigned int) va_arg(arguments,unsigned int));
    if(c == 'x')
        ft_printhexlow(va_arg(arguments,int));
    if(c == 'X')
        ft_printhexup(va_arg(arguments,int));
    if(c == '%')
        ft_putchar('%');
}
int ft_printf(const char *format, ...)
{
    char *str;
    va_list arguments;

    lenght = 0;
	
    va_start ( arguments, format);
    str = (char *)format;
    while(*str)
    {
        if(*str == '%')
        {
            str++;
            ft_printcent(*str, arguments);
        }
        else
            ft_putchar(*str);
        str++;
    }
    va_end (arguments);
    return 0;
}
