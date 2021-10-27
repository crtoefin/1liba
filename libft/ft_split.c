/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:01:37 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_w(char const *s, char c)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

char	*i_str(char const *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i + 1);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		l;
	char	**p;

	l = c_w(s, c);
	p = (char **)malloc(sizeof(char *) * (l + 1));
	if (p == NULL || s == NULL)
		return (NULL);
	i = -1;
	while (++i < l)
	{
		while (s[0] == c)
			s++;
		p[i] = i_str(s, c);
		if (p[i] == NULL)
		{
			while (i > 0)
				free(p[i--]);
			free(p);
			return (NULL);
		}
		s = s + ft_strlen(p[i]);
	}
	p[i] = 0;
	return (p);
}
