/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:25:34 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/22 17:09:15 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int int_len(int nbr)
{
    int i;
    
    i = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
    {
        i++;
        nbr *= -1;
    }
    while (nbr > 0)
    {
        nbr/=10;
        i++;
    }
    return (i);
}

int int_u_len(unsigned int nbr)
{
    int i;
    
    i = 0;
    if (nbr == 0)
        return (1);
    while (nbr > 0)
    {
        nbr/=10;
        i++;
    }
    return (i);
}
