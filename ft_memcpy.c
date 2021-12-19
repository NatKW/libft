/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:28:02 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/03 15:41:11 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	while (n-- > 0)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}
