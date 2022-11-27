/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upphex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:08:19 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 18:07:10 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	ft_print_upphex(unsigned int nbr)
{
	int			i;
	int			r;
	int			len;
	long long	tmp;
    char    hex[hexlen(nbr)];

	i = hexlen(nbr);
	len = i;
	hex[i--] = '\0';
	tmp = nbr;
	if (tmp == 0)
		ft_putnbr(0);
	else if (nbr > 0)
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
		ft_putstr(hex);
	}
	return (len);
}
