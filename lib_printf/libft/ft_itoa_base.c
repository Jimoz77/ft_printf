/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimi <jimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:38:35 by jimi              #+#    #+#             */
/*   Updated: 2024/10/18 14:18:52 by jimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(int n, int base)
{
	size_t	len;

	len = 1;
	if (n < 0 && base == 10)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

static char	*convert_num(long num, int base, size_t len, char *digits)
{
	char	*str;

	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	while (len--)
	{
		str[len] = digits[num % base];
		num /= base;
	}
	return (str);
}

char	*ft_itoa_base(int n, int base)
{
	long	num;
	char	*digits;
	size_t	len;
	char	*str;

	num = (long)n;
	digits = "0123456789ABCDEF";
	len = get_length(n, base);
	if (base < 2 || base > 16)
		return (NULL);
	if (n < 0)
		num = -num;
	str = convert_num(num, base, len, digits);
	if (!str)
		return (NULL);
	if (n < 0 && base == 10)
		str[0] = '-';
	return (str);
}
