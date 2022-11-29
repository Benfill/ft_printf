/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:08:27 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/28 21:06:11 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	hexlen(unsigned int nbr)
{
	int		counter;

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

int	ft_print_lowhex(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_print_lowhex(nbr / 16);
		ft_print_lowhex(nbr % 16);
	}
	else
	{
		if (nbr >= 0 && nbr <= 9)
			ft_putchar(nbr + 48);
		else
			ft_putchar(nbr + 87);
	}
	return (hexlen(nbr));
}
