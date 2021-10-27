/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:24:44 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dub;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dub = (char *) malloc(i + 1);
	if (dub == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		dub[i] = str[i];
		i++;
	}
	dub[i] = '\0';
	return (dub);
}
