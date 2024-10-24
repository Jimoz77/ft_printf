/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimpa <jimpa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:21:20 by jimi              #+#    #+#             */
/*   Updated: 2024/10/23 21:42:04 by jimpa            ###   ########.fr       */
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

int for_str(va_list *args) 
{
    char *str;
	int len;
    str = va_arg(*args, char *);
    if (str == NULL)
	{
		str = "(null)";
    }
    str = ft_strdup(str);
    if (str == NULL)
	{
        return 0;
    }
    ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	return(len);
}


//pour les decimeaux et les entiers // %d // %i //

int	for_deci_int(va_list *args)
{
	int nb;

	nb = va_arg(*args, int);
	ft_putstr(ft_itoa (nb));
	return(ft_strlen(ft_itoa(nb)));
}

//pour les unsigned int // %u //

void	for_un_int(va_list *args)
{
	int	nombre;
	unsigned int nb;

	nb = va_arg(*args, unsigned int);
	nombre = (int)nb;
	ft_putstr(ft_itoa(nombre));

}
//pour les pourcent // %% //

void	for_prcent(void)
{
	ft_putchar('%');
}

//pour les hexa (b16) en maj // %X //

void	FOR_EXA(va_list *args)
{
	int nb;

	nb = va_arg(*args, int);
	ft_putstr(ft_itoa_base(nb, 16));
}

//pour les hexa (b16) en minus // %x //

void for_exa(va_list *args)
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
}
