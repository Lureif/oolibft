/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_strclass.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:54:38 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 20:56:14 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

t_STR	*init_str(char *s)
{
	t_STR	*str;
	uint8_t i;	

	void	(*str_fn_tab[__STR_FN_NUMBER])(t_STR *str, void *) = {
		[STRLEN] = &ft_strclass_strlen,
		/* [SPLIT] = &ft_strclass_split, */
		[JOIN] = &ft_strclass_strjoin,
		/* [MAP] = &ft_strclass_strmap, */
	};
	i = 0;
	if (!(str = malloc(sizeof(t_STR))))
		return (NULL);
	ft_bzero(str, sizeof(t_STR));
	if (s)
	{
		if (!(str->content = ft_strndup(s, ft_strlen(s))))
			return (NULL);
	}
	if (str == NULL)
		return (NULL);
	while (i < __STR_FN_NUMBER)
	{
		str->fn[i] = str_fn_tab[i];
		i++;
	}
	return (str);
}
