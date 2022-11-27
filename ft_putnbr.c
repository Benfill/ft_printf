/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:14:19 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 11:58:36 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	nbrlen(long long nbr)
{
	int		count;

	count = 0;
	if (nbr == 0)
		count = 1;
	if (nbr <= 0)
		nbr *= -1;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(long int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr == 2147483647)
	{
		ft_putchar('2');
		ft_putnbr(147483647);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (nbrlen(nbr));
}

