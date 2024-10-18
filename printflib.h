/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimi <jimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:01:29 by jimi              #+#    #+#             */
/*   Updated: 2024/10/18 15:01:44 by jimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H


// UTIL //

char	which_format(char *str, int index);
void	which_fonc(char format);

// POUR FORMAT //
void	for_char(char c);
void	for_str(char *str);
void	for_deci_int(int nb);
void	for_un_int(unsigned int nb);
void	for_prcent(void);
void	FOR_EXA(int nb);
void	for_exa(int nb);

#endif