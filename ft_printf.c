/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimi <jimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:03:59 by jimi              #+#    #+#             */
/*   Updated: 2024/10/21 16:50:00 by jimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"


void	print_format(va_list args, char format)
{
	if(format == 's')
		for_str(args);
	else if (format == 'c')
		for_char(args);
	else if (format == 'd' || format == 'i')
		for_deci_int(args);
	else if (format == 'u')
		for_un_int(args);
	else if (format == 'x')
		for_exa(args);
	else if (format == 'X')
		FOR_EXA(args);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list args;

	va_start(args, str); // va_start a besoin de nb d arg en deuxieme param

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			print_format(args, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
