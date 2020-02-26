/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclass_strlen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:41:10 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 02:41:41 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

void	ft_strclass_strlen(t_STR *s, void *private)
{
	const uint8_t	*str_ptr;

	(void)private;
	str_ptr = (const uint8_t *)s->content;
	while (*str_ptr)
		str_ptr++;
	s->len = ((const char *)str_ptr - s->content);
}
