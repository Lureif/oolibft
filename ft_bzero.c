/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 08:24:03 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 19:11:20 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((char *)s)[n] = 0;
}
