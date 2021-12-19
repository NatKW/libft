/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:48:40 by nade-la-          #+#    #+#             */
/*   Updated: 2021/11/30 11:01:12 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "42isfantastic";
	char	str2[] = "42isfantastic";
	
	bzero(str + 5, 4);
	printf("bzero : %s\n", str);
	ft_bzero(str2 + 5, 4);
	printf("my_ft_bzero : %s\n", str2);
}