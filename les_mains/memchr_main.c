/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:48:25 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/13 10:49:40 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char s0[] = {0, 1, 2 ,3 ,4 ,5};

	printf("memchr : %s\n", s, memchr(s,0,0));
	printf("ft_memchr : %s\n", s0, ft_memchr(s0,0,0));
	printf("memchr : %s\n", s, memchr(s,2,3));
	printf("ft_memchr : %s\n", s0, ft_memchr(s0,2,3));
	printf("memchr : %s\n", s, memchr(s,256,3));
	printf("ft_memchr : %s\n", s0, ft_memchr(s0,256,3));
}
