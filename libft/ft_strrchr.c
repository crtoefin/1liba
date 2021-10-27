/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:41:55 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	unsigned int	i;
	char			*c;

	c = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			c = (char *)&str[i];
		i++;
	}
	if ((char)ch == str[i])
		return ((char *)&str[i]);
	return (c);
}

