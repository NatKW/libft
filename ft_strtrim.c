/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:43:13 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/28 19:55:43 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(const char *set, int c)
{
	while (*set && *set != (char)c)
		set++;
	if (*set == (char)c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	c;
	char	*trimd;

	if (!s1 || !set)
		return (NULL);
	c = 0;
	while (s1 && check_set(set, c) != 1)
		s1++;
	len = ft_strlen(s1);
	while (len-- > 0 && check_set(set, c) != 1)
	{
		len = ft_strlen(s1);
		trimd = malloc(sizeof(char) * (len + 1));
		if (trimd == NULL)
			return (NULL);
		trimd = ft_substr(s1, 0, len +1);
	}
	return (trimd);
}

int	main(void)
{
	char const	*s = "bcdHello Worldabcd ";
	char const	*set = "abcd";
	
	printf("RESULT : %s", ft_strtrim(s, set));
}
