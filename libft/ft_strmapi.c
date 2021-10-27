/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:32:18 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	c = (char *)malloc(sizeof(*c) * (ft_strlen(s) + 1));
	if (c == NULL)
		return (NULL);
	else
	{
		while (s[i])
		{
			c[i] = f(i, s[i]);
			i++;
		}
		c[i] = '\0';
	}
	return (c);
}
