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

int	ft_unsigned(unsigned int nbr)
{
	if (nbr > 0)
		ft_putnbr(nbr);
	else
		ft_putnbr(nbr);
	return (nbrlen(nbr));
}
