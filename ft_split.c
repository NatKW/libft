/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:40:25 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/21 17:47:24 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
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
	while (j < i)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	w;

	w = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * ((ft_countwords(s, c) + 1)));
	if (!tab)
		return (NULL);
	while (*s)
	{	
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			tab[w] = ft_cpyword(s, c);
			if (!(tab[w]))
			{
				ft_free(tab);
				return (NULL);
			}
			s = s + ft_strlen(tab[w]);
			w++;
		}
	}
	tab[w] = NULL;
	return (tab);
}
