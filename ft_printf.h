/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:35:20 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/27 12:02:30 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	LIBFT_PRINTF
#define	LIBFT_PRINTF

#include	<stdarg.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<string.h>

int		ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putnbr(long int nbr);
int	nbrlen(long long nbr);
int ft_print_upphex(unsigned int nbr);
int ft_print_lowhex(unsigned int nbr);
int  hexlen(unsigned int nbr);
int	ft_putadress(unsigned long i);
int	ft_unsigned(unsigned int nbr);
int	ft_putchar(char c);


#endif
