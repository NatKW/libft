/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:30:35 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/21 18:08:50 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len_new;

	len_new = (ft_strlen(s1) + ft_strlen(s2) + 1);
	new = (char *)calloc (sizeof(char) * (len_new));
	if (new == NULL)
		return (NULL);
	while (*s1 && *s2)
	{
		ft_memcpy(new, s1, len_new);
		ft_strlcat(s1, s2, len_new);
	}
	return (new);
}
