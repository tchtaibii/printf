/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 04:19:07 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 17:08:28 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int     ft_printf(const char *, ...);
int     int_len(int nbr);
int     ft_strlen(char *s);
int     ft_printhexlow(int nbr);
int	    ft_putnbr(int n);
int     ft_printhexup(int nbr);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putnbr_u(unsigned int nb);
int     int_u_len(unsigned int nbr);

#endif