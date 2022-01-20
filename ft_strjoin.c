/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:30:35 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/20 17:54:46 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len_new;

	if (!s1 || !s2)
		return (NULL);
	len_new = (ft_strlen(s1) + ft_strlen(s2) + 1);
	new = (char *)ft_calloc(sizeof(char), len_new);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, ft_strlen(s1));
	ft_strlcat(new, s2, len_new);
	return (new);
}
