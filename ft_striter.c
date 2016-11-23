/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:14:07 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/23 18:17:12 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(s);
		i++;
	}
}
