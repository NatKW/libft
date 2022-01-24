/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:28:02 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/24 19:22:27 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	if (src == 0 && dest == 0)
		return (0);
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	while (n > 0)
	{
		*ptrdest++ = *ptrsrc++;
		n--;
	}	
	return (dest);
}
