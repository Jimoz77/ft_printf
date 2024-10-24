/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiparcer <jiparcer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:21:20 by jimi              #+#    #+#             */
/*   Updated: 2024/10/24 16:42:44 by jiparcer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// toutes les fonctions qui servent a imprimer tout les formats "%..."

//pour les char // %c //

void	for_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	ft_putchar(c);
}

// pour les str // %s //

int	for_str(va_list *args)
{
	char	*str;
	int		len;

	str = va_arg(*args, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr(str);
	len = ft_strlen(str);
	return len;
}



//pour les decimeaux et les entiers // %d // %i //

int	for_deci_int(va_list *args)
{
	int nb;
	int	len;
	char *result;

	nb = va_arg(*args, int);
	result = (ft_itoa (nb));
	len = ft_strlen(result);
	ft_putstr(result);
	free(result);
	return(len);
}

//pour les unsigned int // %u //

int	for_un_int(va_list *args)
{
	unsigned int	nb;
	int				len;
	char			*result;

	nb = va_arg(*args, unsigned int);
	result = ft_unitoa(nb);
	len = ft_strlen(result);
	ft_putstr(result);
	free(result);
	return (len);
}
//pour les pourcent // %% //

void	for_prcent(void)
{
	ft_putchar('%');
}

//pour les hexa (b16) en maj // %X //

int	FOR_EXA(va_list *args) // pas oublier de free str !!!!
{
	int nb;
	int len;
	char *result;

	nb = va_arg(*args, int);
	result = ft_itoa_base(nb, 16);
	len = ft_strlen(result);
	ft_putstr(result);
	free(result);
	return (len);
}

//pour les hexa (b16) en minus // %x //

int	for_exa(va_list *args) // pas oublier de free str !!!
{
	int nb;
	char *str;
	int i;

	i = 0;
	nb = va_arg(*args, int);
	str = ft_itoa_base(nb, 16);
	while (str[i])
	{
		str[i] = (char)ft_tolower(str[i]);
		i++;
	}
	ft_putstr(str);
	free(str);
	return (i);
}

int for_pointer(va_list *args) {
    void *ptr;
    char *result;
    int len;
    int i;

    ptr = va_arg(*args, void *);
    if (!ptr) {
        ft_putstr("0x0");
        return 3; // "0x0" length
    }

    ft_putstr("0x");
    result = ft_itoa_base_printf((unsigned long)ptr, 16);
    if (!result) return 0;

    i = 0;
    len = ft_strlen(result) + 2; // Include length of "0x"
    while (result[i]) {
        result[i] = ft_tolower(result[i]);
        i++;
    }
    ft_putstr(result);
    free(result);
    return len;
}

