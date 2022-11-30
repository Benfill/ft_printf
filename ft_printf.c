/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:51:58 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/28 19:30:27 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

int	printf_searcher(va_list args, const char *format, int i)
{
	if (format[i] == '%')
		return (ft_putchar ('%'));
	else if (format[i] == 'p')
		return (ft_putadress(va_arg(args, unsigned long)));
	else if (format[i] == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (format[i] == 'x')
		return (ft_print_lowhex(va_arg(args, unsigned int)));
	else if (format[i] == 'X')
		return (ft_print_upphex(va_arg(args, unsigned int)));
	else if (format[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format[i] == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar(format[i++]);
		else
		{
			len += printf_searcher(args, format, ++i);
			i++;
		}
	}
	va_end(args);
	return (len);
}
