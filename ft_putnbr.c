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

int	nbrlen(int nbr)
{
	int		count;

	count = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		count = 1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nbr);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48);
	return (nbrlen(nbr));
}
