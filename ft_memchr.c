/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:09:06 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/20 17:37:00 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			*str;
	unsigned char			uc;

	str = (unsigned char *)s;
	uc = c;
	while (n-- > 0)
	{
		if (*str == uc)
			return (str);
		str++;
	}
	return (NULL);
}
