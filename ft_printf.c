/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiparcer <jiparcer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:03:59 by jimi              #+#    #+#             */
/*   Updated: 2024/10/24 15:52:30 by jiparcer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cpyifnb(char *str)
{
	int		i;
	int		j;
	char	*res;
	int		result;

	i = 0;
	j = 0;
	res = NULL;
	res = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!res)
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res[j] = str[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	result = ft_atoi(res);
	free(res);
	return (result);
}

int	firstoccnb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// ?
int	is_width_format(const char *format)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_isdigit(*format))
			{
				while (ft_isdigit(*format))
					format++;
				if (*format == 'd' || *format == 's' || *format == 'c'
					|| *format == 'X' || *format == 'x' || *format == 'p'
					|| *format == 'u' || *format == 'i' || *format == '%')
					return (1);
				else
					return (0);
			}
		}
		format++;
	}
	return (0);
}

int	print_format(va_list *args, char *format, int index)
{
	int	len;
	int	i;
	int	nbspace;

	len = 0;
	i = 0;
	nbspace = 0;
	if (is_width_format(format) == 1)
		nbspace = cpyifnb(format) - firstoccnb(format);
	while (format[index])
	{
		while (i < nbspace)
		{
			ft_putchar(' ');
			i++;
		}
		if (format[index] == 's')
		{
			len = for_str(args);
			return (len);
		}
		else if (format[index] == 'c')
		{
			for_char(args);
			return (1);
		}
		else if (format[index] == 'd' || format[index] == 'i')
		{
			len = for_deci_int(args);
			return (len);
		}
		else if (format[index] == 'u')
		{
			len = for_un_int(args);
			return (len);
		}
		else if (format[index] == 'x')
		{
			len = for_exa(args);
			return (len);
		}
		else if (format[index] == 'X')
		{
			len = FOR_EXA(args);
			return (len);
		}
		else if (format[index] == '%')
		{
			for_prcent();
			return (1);
		}
		else if (format[index] == 'p')
		{
			len = for_pointer(args);
			return (len);
		}
		index++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list args;
	int len;
	int nbformat;

	va_start(args, str);
	i = 0;
	nbformat = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			len += print_format(&args, (char *)str, i);
		}
		else
		{
			ft_putchar(str[i]);
			nbformat++;
		}
		i++;
	}
	va_end(args);
	return (nbformat + len);
}
