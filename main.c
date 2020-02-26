/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:50:21 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 03:03:57 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"
#include <stdio.h>

int	main(void)
{
	t_STR *str;

	str = init_str("Hello world!");
	printf("str = %s :: len = %d\n", str->content, str->len);
    return (0);
}
