/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:41:17 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/08 18:46:34 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	//char src1[50] = "Bonjour Je m'appelle Nathalie";
	//char dest1[50] = "Au Revoir ching ";
	char src1[50] = "Hello";
	char dest1[50] = "Hi";
	//char	dest1[50];
	char src2[50] = "Hello";
	char dest2[50] = "Hi";
	//char	dest2[50];
	
	printf("source : %s\tdestination : %s\n", src1, dest1);
	printf("ORIGIN RESULT : %zu\tstring : %s\n", strlcpy(dest1, src1, 0), dest1);
	printf("LIB RESULT : %zu\tstring : %s\n", ft_strlcpy(dest2, src2, 0), dest2);
}
