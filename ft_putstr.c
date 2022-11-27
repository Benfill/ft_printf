/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:14:35 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 11:56:25 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	else if (str)
	{
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	return (i);
}
