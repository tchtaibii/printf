/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:11 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 01:02:16 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//******************************************///
void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10 + 48));
	}
	if (nb < 10)
		ft_putchar((nb + 48));
}
//******************************************///
void    ft_printhexlow(int nbr)
{
    char base[] = "0123456789abcdef";
    if (nbr >= 16)
    {
		ft_printhexlow(nbr / 16);
        ft_printhexlow(nbr % 16);
    }
    else
        write(1, &base[nbr], 1);
}
//******************************************///
void    ft_printhexup(int nbr)
{
	char base[] = "0123456789ABCDEF";
    if (nbr >= 16)
    {
        ft_printhexup(nbr / 16);
        ft_printhexup(nbr % 16);
    }
    else
        write(1, &base[nbr], 1);
}
//******************************************///
void	ft_putstr(char *s)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}
//******************************************///
int ft_printf(const char *format, ...)
{
    char *str;
    va_list arguments;
	
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
                //if(*str == 'p')
                    
                if(*str == 'd' || *str == 'i')
                    ft_putnbr(va_arg(arguments,int));
                if(*str == 'u')
                    ft_putnbr((unsigned int) va_arg(arguments,unsigned int));
                if(*str == 'x')
                    ft_printhexlow(va_arg(arguments,int));
                if(*str == 'X')
                    ft_printhexup(va_arg(arguments,int));
            }
        else
            ft_putchar(*str);
        str++;
    }
    va_end (arguments);
    return 0;
}
int main()
{
	int i = 233 ;
	char p[] = "";
    ft_printf("%x",i);
    // printf("%c",'a');
}
