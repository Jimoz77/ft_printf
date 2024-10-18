/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimi <jimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:21:20 by jimi              #+#    #+#             */
/*   Updated: 2024/10/18 14:59:05 by jimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printflib.h"

// toutes les fonctions qui servent a imprimer tout les formats "%..."

//pour les char // %c //

void	for_char(char c)
{
	ft_putchar(c);
}

// pour les str // %s //

void	for_str(char *str)
{
	ft_putstr(str);
}

//pour les decimeaux et les entiers // %d // %i //

void	for_deci_int(int nb)
{
	ft_putstr(ft_itoa (nb));
}

//pour les unsigned int // %u //

void	for_un_int(unsigned int nb)
{
	int	nombre;

	nombre = (int)nb;
	ft_putstr(ft_itoa(nombre));

}
//pour les pourcent // %% //

void	for_prcent(void)
{
	ft_putchar('%');
}

//pour les hexa (b16) en maj // %X //

void	FOR_EXA(int nb)
{
	ft_putstr(ft_itoa_base(nb, 16));
}

//pour les hexa (b16) en minus // %x //

void for_exa(int nb)
{
	char *str;
	int i;

	i = 0;
	str = ft_itoa_base(nb, 16);
	while (str[i])
	{
		str[i] = (char)ft_tolower(str[i]);
		i++;
	}
	ft_putstr(str);
	
}