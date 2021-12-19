/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:58:30 by nade-la-          #+#    #+#             */
/*   Updated: 2021/11/29 11:14:16 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	test(int *list, int (*ptrft)(int))
{
	int	result;
	int	i;

	i = 0;
	while (list[i])
	{
		result = (*ptrft)(list[i]);
		printf("%d\n", result);
		i++;
	}
}

int	main(void)
{
	int	list[7] = {'a', 'Z', '\n', '9', '~', '\\', ' '};

	test(list, &ft_isalpha);
	test(list, &ft_isdigit);
	test(list, &ft_isalnum);
	test(list, &ft_isascii);
	test(list, &ft_isprint);
	return (0);
}
