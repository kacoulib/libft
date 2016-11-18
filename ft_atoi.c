/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:00:37 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/18 13:28:40 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int j;
	int k;
	int l;
	int r;

	i = 0;
	while (ft_isdigit(str[i]))
		i++;
	if (i == 0 || i == 1)
		return ((i == 0) ? 0 : str[0] - 48);
	j = 1;
	k = 0;
	l = 0;
	r = 0;
	while (i-- > 0)
	{
		j = 1;
		k = 0;
		while (k++ < i)
			j *= 10;
		r += j * (str[l] - 48);
		l++;
	}
	return (r);
}
