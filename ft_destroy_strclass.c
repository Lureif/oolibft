/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_strclass.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:39:19 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 20:47:34 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

void	destroy_str(t_STR *str)
{
	if (!str)
		return ;
	if (str->content)
		free((void *)str->content);
	if (str->join)
		free(str->join);
	free(str);
	if (str->split)
		ft_del_2dtab((void **)str->split);
}
