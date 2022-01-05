/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/05 20:09:17 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
	char	c;
	char	*s;

	c = ' ';
	s = "       Sometimes you win sometimes you learn      ";
	printf("%d", count_words(s, c));
}

//char	**ft_split(char const *s, char c)*/
