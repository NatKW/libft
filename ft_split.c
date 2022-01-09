/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/09 20:40:36 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char *s, char c)
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

static char	*ft_cpyword(char *s, char c)
{
	size_t		i;
	size_t		j;
	char		*word;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	if (j < i)
		ft_memcpy(word, s, i);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] != '0' && j < 1)
	{
		k = 0;
		while (s[i] == c)
			i++;
		tab[j] = (char *)malloc(sizeof(char) * (ft_countwords(s, c) + 1));
		if (tab[j] == NULL)
			return (NULL);
		while (s[i] != c && s[i] != '\0')
		{
			tab[k++][j] = s[i++];
			tab[k][j] ='\0';
			j++;
		}
		tab[j] = '\0';
	}
	return (tab);
}

int	main(void)
{
	char	c;
	char	*s;

	c = ' ';
	s = "Sometimes you   win   sometimes you learn";
	printf("%s\n", ft_split(s, c));
}
