/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:08:46 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/13 13:05:21 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	const char	s1[50] = "test\200";
	const char	s2[50] = "test\0";
	const char	s3[50] = "test\200";
	const char	s4[50] = "test\0";
	const char	s5[50] = "1234";
	const char	s6[50] = "1235";
	const char	s7[50] = "1234";
	const char	s8[50] = "1235";

	printf("fonction originale : %d\n", strncmp((char *)s1, (char *)s2, 7));
	printf("ma fonction : %d\n", ft_strncmp((char *)s3, (char *)s4, 7));
	printf("fonction originale : %d\n", strncmp((char *)s5, (char *)s6, 3));
	printf("ma fonction : %d\n", ft_strncmp((char *)s7, (char *)s8, 3));
	return (0);
}
