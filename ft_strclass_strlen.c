/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclass_strlen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:41:10 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 19:03:33 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

/*
**	HEADER	   : oolibft.h
**	PROJ  	   : /
**	NAME  	   : ft_strclass_strlen
**	ARGS  	   : -> t_STR *s : a pointer to str object
**				 -> void *private: Unused. pass NULL.
**	DESCRIPTION:
**	This function is a simple strlen, but acting on the strclass and modifying
**	its len variable.
*/

void	ft_strclass_strlen(t_STR *s, void *private)
{
	const uint8_t	*str_ptr;

	(void)private;
	str_ptr = (const uint8_t *)s->content;
	while (*str_ptr)
		str_ptr++;
	s->len = ((const char *)str_ptr - s->content);
}
