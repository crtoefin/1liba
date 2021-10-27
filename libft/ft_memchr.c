/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:26:49 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	cu;

	cu = (unsigned char)c;
	s = (unsigned char *)arr;
	while (n--)
	{
		if (*s == cu)
			return (s);
		s++;
	}
	return (NULL);
}
