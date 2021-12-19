/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:58:37 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/09 10:07:39 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (size > lendst)
	{	
		while (src[i] && i < (size - 1) - lendst)
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
		return (lensrc + lendst);
	}	
	else
		return (lensrc + size);
}
