/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:50:21 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 19:56:14 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oolibft.h"
#include <stdio.h>

int	main(void)
{
	t_STR *str;

	str = init_str("Hello world!");
	str->fn[STRLEN](str, NULL);
	str->fn[JOIN](str, " HAHAHA!!");
	printf("str = %s :: len = %d\nstr joined = %s\n", str->content, str->len, str->join);
	destroy_str(str);
    return (0);
}
