/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:41:07 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/23 16:29:40 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*r;

	i = 0;
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	while (s[i] == ' ' || s[j] == '\n' || s[j] == '\t')
		i++;
	r = malloc((sizeof(r) * (j) + 1));
	k = 0;
	while (i < j)
	{
		r[k] = s[i];
		k++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
