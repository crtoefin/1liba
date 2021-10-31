/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:00:20 by crtoefin          #+#    #+#             */
/*   Updated: 2021/10/26 16:02:25 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_sign(int n, int *np)
{
	int	len;

	if (n <= 0)
		*np = 1;
	else
		*np = 0;
	len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len + *np);
}

void	ft_fill_string(char *str, int last,
	int num, int neg)
{
	while (num)
	{
		if (neg)
			str[last--] = 48 + ((num % 10) * (-1));
		else
			str[last--] = 48 + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		np;
	char	*str;

	len = ft_len_sign(n, &np);
	str = ft_calloc((size_t)(len), sizeof(char));
	if (!(str))
		return ((void *)0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	ft_fill_string(str, (len - 2), n, np);
	return (str);
}
