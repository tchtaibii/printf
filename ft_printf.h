/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:07 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 15:27:50 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *, ...);
void    ft_printhexlow(int nbr);
void	ft_putnbr(int n);
void    ft_printhexup(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *s);

#endif