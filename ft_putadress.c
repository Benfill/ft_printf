/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:14:53 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 12:00:42 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	ft_putadress(unsigned long i)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_print_lowhex(i);
	return (len);
}
