/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:43:13 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/22 19:26:26 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str); // faire une fonction pour checker set 
	return (NULL);// caractere par caractere avec booleen / indice ...
}	// start && end

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimd;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (s1 && ft_strchr(s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len-- > 0 && ft_strchr(s1[len]))
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
