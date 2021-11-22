/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:25:41 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 16:25:13 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_printhexlow(int nbr)
{
    char base[] = "0123456789abcdef";
    int tmp;

    tmp = nbr;
    if (nbr >= 16)
    {
		ft_printhexlow(nbr / 16);
        ft_printhexlow(nbr % 16);
    }
    else
        write(1, &base[nbr], 1);
    return (int_len(tmp));
}
//******************************************///
int    ft_printhexup(int nbr)
{
	char base[] = "0123456789ABCDEF";
    int tmp;

    tmp = nbr;
    if (nbr >= 16)
    {
        ft_printhexup(nbr / 16);
        ft_printhexup(nbr % 16);
    }
    else
        write(1, &base[nbr], 1);
    return (int_len(tmp));
}
