/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_strclass.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:39:19 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 02:49:30 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

void	destroy_str(t_STR *STR)
{
	if (STR->join)
		free(STR->join);
	/* if (STR->split) */
	/* 	free_tab(STR->split); */
}
