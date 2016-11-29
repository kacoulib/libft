/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:41:07 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/28 22:14:31 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		l;
	int		n;
	char	*r;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	l = j;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	while (s[i] == ' ' || s[j] == '\n' || s[j] == '\t')
		i++;
	n = l - ((l - j) + i);
	r = (char *)malloc((sizeof(char) * n + 1));
	if (!r)
		return (NULL);
	k = 0;
	while (k < n)
		r[k++] = s[i++];
	r[k] = '\0';
	return (r);
}
