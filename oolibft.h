/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oolibft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjorgen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 02:33:51 by brjorgen          #+#    #+#             */
/*   Updated: 2020/03/05 20:48:41 by brjorgen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef OOLIBFT_H
# define OOLIBFT_H

# include <stdint.h>
# include <stdlib.h>
# include <stdbool.h>

enum			e_STR_FN
{
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

t_STR			*init_str(char *s);
void			destroy_str(t_STR *STR);
void			ft_del_2dtab(void **tab);

/*
**	class methods
*/

void			ft_strclass_strjoin(t_STR *s, void *private);
void			ft_strclass_strlen(t_STR *s, void *private);


/*
**	helper functions
*/

size_t			ft_strlen(const char *s);
char			*ft_strndup(const char *s, const int n);
void			ft_bzero(void *s, size_t n);

#endif
