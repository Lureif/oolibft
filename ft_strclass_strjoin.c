/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclass_strjoin.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:43:06 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 02:48:18 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

void	ft_strclass_strjoin(t_STR *s, void *private)
{
	char			joinbuff[4096];
	char			*join;
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	join = (char *)private;
	if (s->content == 0)
		return ;
	while (s->content[i])
	{
		joinbuff[i] = s->content[i];
		i++;
	}
	while (join[y])
	{
		joinbuff[i] = join[y];
		y++;
		i++;
	}
	joinbuff[i] = '\0';
	s->join = ft_strndup(joinbuff, s->len);
}
