/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:04:04 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/28 22:03:27 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_firstcheck(char const *s, char **r)
{
	if (ft_strlen(s) <= 1)
	{
		r[0][0] = s[0];
		r[0][1] = '\0';
		return (0);
	}
	return (1);
}

int			ft_getend_id(char const *s, char c, int start)
{
	int		i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		i++;
		start++;
	}
	return (i);
}

int			ft_write(char **r, char const *s, int start, int end)
{
	int		i;
	int		j;
	char	*k;

	i = 0;
	j = 0;
	k = (char *)malloc(sizeof(char) * (end + 1));
	if (k == NULL)
		return (-1);
	while (r[i])
		i++;
	while (j < end)
	{
		k[j] = s[start];
		start++;
		j++;
	}
	k[j] = '\0';
	r[i] = k;
	return (start);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**r;

	i = 0;
	j = 0;
	r = NULL;
	r = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (r == NULL || ft_firstcheck(s, r) == 0)
		return (NULL);
	while (s[i])
	{
		j = ft_getend_id(s, c, i);
		if (j == 0)
			i++;
		else
			i = ft_write(r, s, i, j);
		if (i == -1)
			return (NULL);
	}
	return (r);
}
