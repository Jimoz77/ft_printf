/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiparcer <jiparcer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:01:29 by jimi              #+#    #+#             */
/*   Updated: 2024/10/24 15:52:19 by jiparcer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

// POUR FORMAT //
void	for_char(va_list *args);
int	for_str(va_list *args);
int	for_deci_int(va_list *args);
int	for_un_int(va_list *args);
void	for_prcent(void);
int		FOR_EXA(va_list *args);
int		for_exa(va_list *args);
int		ft_printf(const char *str, ...);
int		for_pointer(va_list *args);

#endif