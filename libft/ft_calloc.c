/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:51:51 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	j;
	char	*m;

	i = count * size;
	m = malloc(i);
	if (m == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		m[j] = 0;
		j++;
	}
	return (m);
}
