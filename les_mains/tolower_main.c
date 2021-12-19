/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:42:10 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/09 17:44:05 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char str[] = "HELLo WOrlD! ---+++???123HELLO";
	int i;
	int size;

	i = 0;
	size = ft_strlen(str);

	while (i <= size)
	{
		putchar(ft_tolower(str[i]));
		i ++;
	}
	return (0);
}