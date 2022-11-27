/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:51:58 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/14 18:52:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "ft_printf.h"

size_t     args_counter(const char *str)
{
    int     i;
    size_t  counter;

    i = 0;
    counter = 0;
    while (str[i])
    {
        if (str[i] == '%' )
        {
            counter++;
        }
        i++;
    }
    return (counter);
}

int ft_printf(const char *format, ...)
{
    va_list         args;
    int             num_args;
    int             i;
    int             len;
    int             counter;

    i = 0;
    counter = 0;
    num_args = args_counter(format);
    len = 0;
    va_start(args, format);
    while(format[i])
    {
        if(format[i] != '%')
        {
            ft_putchar(format[i]);
            i++;
            len++;
        }
        else
        {
            if (counter < num_args)
            {
                i++;
                if(format[i] == '%')
                {
                    len += ft_putchar('%');
                }
                else if (format[i] == 'p')
                {
                    len += ft_putadress(va_arg(args, unsigned long));
                }
                else if (format[i] == 'd')
                {
                    len += ft_putnbr(va_arg(args, long int));
                }
                else if (format[i] == 'x')
                {
                    len += ft_print_lowhex(va_arg(args, unsigned int));
                }
                else if (format[i] == 'X')
                {
                    len += ft_print_upphex(va_arg(args, unsigned int));
                }
                else if (format[i] == 'i')
                {
                    len += ft_putnbr(va_arg(args, int));
                }
                else if (format[i] == 'u')
                {
                    len += ft_unsigned(va_arg(args, unsigned int));
                }
                else if (format[i] == 'c')
                {
                    len += ft_putchar(va_arg(args, int));
                }
                else if (format[i] == 's')
                {
                    len += ft_putstr(va_arg(args, char *));
                }
                counter++;
            }
            i++;
        }
    }
    return (len);
    va_end(args);
}

// int		main()
// {
// 	ft_printf("%d", -1);
// }