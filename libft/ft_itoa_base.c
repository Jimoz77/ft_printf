/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiparcer <jiparcer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:38:35 by jimi              #+#    #+#             */
/*   Updated: 2024/10/24 17:01:29 by jiparcer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t get_length(unsigned int n, int base) {
    size_t len = 1;
    while (n /= base) len++;
    return len;
}

static char* convert_num(unsigned int num, int base, size_t len, char *digits) {
    char *str = (char *)malloc(len + 1);
    if (!str) return NULL;
    str[len] = '\0';
    while (len--) {
        str[len] = digits[num % base];
        num /= base;
    }
    return str;
}

char* ft_itoa_base(int n, int base) {
    if (base < 2 || base > 16) return NULL;

    unsigned int num;
    char *digits = "0123456789ABCDEF";
    size_t len;
    char *str;

    if (n < 0 && base == 16) {
        num = (unsigned int)n;
    } else {
        num = (n < 0) ? -n : n;
    }

    len = get_length(num, base);
    str = convert_num(num, base, len, digits);

    if (!str) return NULL;

    if (n < 0 && base == 10) str[0] = '-';
    return str;
}


