/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/30 20:38:59 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}	
	return (count);
}

//char	**ft_split(char const *s, char c)

int	main(void)
{
	char	c;
	char	*s;

	c = ' ';
	s = "Sometimes you win sometimes you learn and wvwryhtibg is good";
	printf("%d", count_words(s, c));
}
