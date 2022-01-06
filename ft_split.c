/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/06 19:48:41 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}	
	return (count);
}
*/
char	**ft_split(char const *s, char c)
{
	char 	**tab;
	int		i;
	int		j;
	int		k;
	
	i=	0;
	j = 0;
	while (s)
	{
		while (s && s == c)
			i++;
		if (*s != c && *s != '\0')
			 
		while (*s && *s != c)
		{
			s++;
			i++;
		
	}
	return (s2);
}

int	main(void)
{
	char	c;
	char	*s;

	c = ' ';
	s = "       Sometimes you   win   \nsometimes you learn      ";
	printf("%d", len_words(s, c));
}


