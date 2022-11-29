/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:14:53 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/28 21:05:35 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	adress_len(unsigned long nbr)
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

int	ft_print_adhex(unsigned long nbr)
{
	if (nbr >= 16)
	{
		ft_print_adhex(nbr / 16);
		ft_print_adhex(nbr % 16);
	}
	else
	{
		if (nbr >= 0 && nbr <= 9)
			ft_putchar(nbr + 48);
		else
			ft_putchar(nbr + 87);
	}
	return (adress_len(nbr));
}

int	ft_putadress(unsigned long i)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_print_adhex(i);
	return (len);
}
