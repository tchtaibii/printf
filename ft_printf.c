/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:11 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/21 05:18:21 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10 + 48), fd);
	}
	if (nb < 10)
		ft_putchar_fd((nb + 48), fd);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}


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
                if(*str == 'd')
                {
                    ft_putnbr_fd(va_arg(arguments,int),1);
                }
                else if(*str == 'c')
                {
                    ft_putchar_fd(va_arg(arguments, int),1);
                }
                else if(*str == 's')
                {
                    ft_putstr_fd(va_arg(arguments, char* ),1);
                }
            }
        // else
        //     printf("%s\n",str);
            
        str++;
    }
    va_end (arguments);
    return 0;
}


int main()
{
    // ft_printf("%s","amine");
    printf("%c",'a');
}