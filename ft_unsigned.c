/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:27:09 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 11:57:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	unsignedlen(unsigned int nbr)
{
	int		count;

	count = 0;
	if (nbr == 0)
		count = 1;
	if (nbr < 0)
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

int	ft_unsigned(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_unsigned(nbr / 10);
		ft_unsigned(nbr % 10);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48);
	return (unsignedlen(nbr));
}
