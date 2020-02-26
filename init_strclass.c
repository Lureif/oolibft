/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_strclass.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:54:38 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 03:51:39 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

t_STR *init_str(char *s)
{
	t_STR	*str;
	uint8_t i;

	i = 0;
	str = malloc(sizeof(t_STR));
	str->content = ft_strndup(s, ft_strlen(s));
	if (str == NULL)
		return (NULL);
	while (i < __STR_FN_NUMBER)
	{
		str->fn[i] = str_fn[i];
		i++;
	}
	str->fn[STRLEN](str, NULL);
//	str->fn[SPLIT]
	return (str);
}
