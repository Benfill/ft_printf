/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:35:20 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/28 18:09:21 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int			ft_printf(const char *format, ...);
int			ft_putstr(char *str);
int			ft_putnbr(int nbr);
int			nbrlen(int nbr);
int			ft_print_upphex(unsigned int nbr);
int			ft_print_lowhex(unsigned int nbr);
int			hexlen(unsigned int nbr);
int			ft_putadress(unsigned long i);
int			ft_unsigned(unsigned int nbr);
int			ft_putchar(char c);

#endif
