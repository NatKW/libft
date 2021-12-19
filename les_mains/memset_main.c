/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:28:33 by nade-la-          #+#    #+#             */
/*   Updated: 2021/11/29 17:18:59 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "nathalieisawesome";

	printf("memset : %s\n", memset(str, 'c', 4));
	printf("my_ft_memset : %s\n", ft_memset(str, 'c', 4));
}

