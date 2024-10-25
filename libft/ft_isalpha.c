/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimpa <jimpa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:07:50 by jimpa             #+#    #+#             */
/*   Updated: 2024/10/04 12:07:52 by jimpa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int car)
{
	if (car >= 'a' && car <= 'z' || car >= 'A' && car <= 'Z')
		return (1);
	else
		return (0);
}