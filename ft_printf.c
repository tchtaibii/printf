/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:11 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 15:31:08 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_print
int ft_printf(const char *format, ...)
{
    char *str;
    int nbr;
    va_list arguments;
    int lenght;

    lenght = 0;
	
    va_start ( arguments, format );
    str = (char *)format;
    while(*str)
    {
        if(*str == '%')
            {
                str++;
                if(*str == 'c')
                    ft_putchar(va_arg(arguments, int));
                if(*str == 's')
                    ft_putstr(va_arg(arguments, char*));
                if(*str == 'p')
                {
                    ft_putstr("0x");
                    ft_printhexlow(va_arg(arguments,int));
                }
                if(*str == 'd' || *str == 'i')
                    ft_putnbr(va_arg(arguments, int));
                if(*str == 'u')
                    ft_putnbr((unsigned int) va_arg(arguments,unsigned int));
                if(*str == 'x')
                    ft_printhexlow(va_arg(arguments,int));
                if(*str == 'X')
                    ft_printhexup(va_arg(arguments,int));
                if(*str == '%')
                    ft_putchar('%');
            }
        else
            ft_putchar(*str);
        str++;
    }
    va_end (arguments);
    return lenght;
}
