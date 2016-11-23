/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:52:02 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/23 17:06:31 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*r;

	i = 0;
	r = malloc(sizeof(char *) * (len + 1));
	if (r == NULL)
		return (r);
	while (s[start] && len > 0)
	{
		r[i] = s[start];
		i++;
		len--;
		start++;
	}
	r[start] = '\0';
	return (r);
}
