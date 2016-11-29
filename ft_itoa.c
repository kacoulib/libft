/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:54:27 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/28 21:57:22 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = -1;
	j = ft_strlen(s);
	while (i++ < (j-- - 1))
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		i;
	int		len;
	int		j;
	char	*r;

	i = 0;
	r = NULL;
	if ((len = n) < 0)
		n = -n;
	j = len;
	while (len /= 10)
		i++;
	r = (char *)malloc(sizeof(char)  * (i + 1));
	if (r == NULL)
		return (NULL);
	r[i] = '\0';
	i = 0;
	r[i++] = n % 10 + '0';
	while ((n /= 10) > 0)
	{
		r[i++] = n % 10 + '0';
	}
	if (j < 0)
		r[i] = '-';
	return (ft_strrev(r));
}
