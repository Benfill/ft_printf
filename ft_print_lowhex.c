/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:08:27 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/26 12:08:33 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int  hexlen(unsigned int nbr)
{
    int     counter;

    counter = 0;
    if (nbr == 0)
        counter++;
    while (nbr != 0)
    {
        nbr /= 16;
        counter++;
    }
    return (counter);
}

void    lowercase(char *str)
{
    size_t  i;

    i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'f')
            str[i] += 32;
        i++;
    }
}

int ft_print_lowhex(unsigned int nbr)
{
    char    hex[hexlen(nbr)];
    int  i;
    int     r;
    long long     tmp;

    i = hexlen(nbr);
    tmp = nbr;
    hex[i--] = '\0';
    if (tmp == 0)
        ft_putnbr(0);
    if (tmp > 0)
    {
        while (tmp != 0)
        {
            r = tmp % 16;
            if (r < 10)
                hex[i--] = (48 + r);
            else
                hex[i--] = (55 + r);
            tmp /= 16;
        }
        lowercase(hex);
        ft_putstr(hex);
    }
    return (hexlen(nbr));
}

// int     main()
// {
//     ft_print_upphex(-1);
// }