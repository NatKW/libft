/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:42:47 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/14 15:27:47 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{	
		j = 0;
		while (little[j] && big[i + j] && (i + j) < len
			&& big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i]));
		}	
		i++;
	}
	return (NULL);
}
