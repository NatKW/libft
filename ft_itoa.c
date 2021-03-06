/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:22:32 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/19 12:56:45 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennbr(long int n)
{	
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*dest;
	long int	number;
	int			len;

	number = n;
	len = ft_lennbr(number);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (number < 0)
		number *= -1;
	if (number >= 0)
	{
		while (len > 0)
		{
			dest[len - 1] = number % 10 + '0';
			len--;
			number = number / 10;
		}
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
