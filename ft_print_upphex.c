/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upphex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:08:19 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/28 16:46:25 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	ft_print_upphex(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_print_upphex(nbr / 16);
		ft_print_upphex(nbr % 16);
	}
	else
	{
		if (nbr >= 0 && nbr <= 9)
			ft_putchar(nbr + 48);
		else
			ft_putchar(nbr + 55);
	}
	return (hexlen(nbr));
}
