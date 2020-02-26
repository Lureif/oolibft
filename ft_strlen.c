/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:20:21 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/22 23:24:33 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

size_t		ft_strlen(char const str[static 1])
{
	const uint8_t *str_ptr;

	str_ptr = (const uint8_t *)str;
	while (*str_ptr)
		str_ptr++;
	return ((const char *)str_ptr - str);
}
