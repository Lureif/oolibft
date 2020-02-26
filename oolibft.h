/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oolibft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:33:51 by brjorgen          #+#    #+#             */
/*   Updated: 2020/02/26 03:01:33 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

enum	STR_FN {
	STRLEN,
	/* SPLIT, */
	JOIN,
	/* MAP, */
	__STR_FN_NUMBER
};

typedef	struct	s_STR
{
	const char	*content;
	char		*join;
	char		**split;
	int			len;
	void		(*fn[__STR_FN_NUMBER])(struct s_STR *, void *);    
}				t_STR;

/*
**	constructor / destructor
*/

t_STR	*init_str(char *s);
void	destroy_str(t_STR *STR);

/*
**	class methods
*/

void	ft_strclass_strjoin(t_STR *s, void *private);
void	ft_strclass_strlen(t_STR *s, void *private);


/*
**	helper functions
*/

char	*ft_strndup(const char *s, const int n);
size_t	ft_strlen(const char *s);

/*
**	FPTR arrays
*/

void	(*str_fn[__STR_FN_NUMBER])(t_STR *STR, void *) = {
	&ft_strclass_strlen,
//	&ft_strclass_split,
	&ft_strclass_strjoin,
	/* &ft_strclass_strmap, */
};
