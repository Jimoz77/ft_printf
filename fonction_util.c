/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimi <jimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:49:55 by jimi              #+#    #+#             */
/*   Updated: 2024/10/18 15:28:24 by jimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printflib.h"

char	which_format(char *str, int index)
{
	if (str[index] == '%')
	{
		index++;
		return (str[index]);
	}
	return (NULL);
}

void	which_fonc(char format)
{
	if (format == "c")
	{
		
	}
	
}