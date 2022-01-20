/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:48:21 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/20 17:38:01 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;

	if (dest == 0 && src == 0)
		return (0);
	if (src < dest)
	{
		while (len > 0)
		{	
			((char *)dest)[len - 1] = ((const char *)src)[len - 1];
			len--;
		}	
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}
