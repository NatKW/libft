/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/12 19:14:35 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab)
{
	while (**tab)
	{
		free(tab);
		tab++;
	}
	free(tab);
}

static int	ft_countwords(const char *s, char c)
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

static char	*ft_cpyword(const char *s, char c)
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
		*word++ = *s++;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		w;

	tab = 0;
	w = 0;
	while (*s)
	{	
		while (*s == c)
			s++;
		tab = (char **)malloc(sizeof(char) * ((ft_countwords(s, c) + 1)));
		if (!*s || tab[w] == NULL)
			ft_free(tab);
		while (*s != c && *s != '\0')
		{
			*tab = ft_cpyword(s, c);
			*tab[w] = '\0';
		}
		tab[w]++;
	}
	return (tab);
}

int	main(void)
{
	char	c;
	char	*s;

	c = ' ';
	s = "  Sometimes you   win sometimes you learn   ";
	printf("%s\n", *ft_split(s, c));
}
