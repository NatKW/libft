/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:37:32 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/14 16:53:30 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char str1[] = "tripouille";
	char str2[] = "tripouille";
	printf("strrchr : dans %s, recherche %s\n", str1, strrchr(str1,'l')); 
	printf("ft_strrchr : dans %s, recherche %s", str2, ft_strrchr(str2,'l')); // == s+8 //
	printf("ft_strrchr : dans %s, recherche %s", str2, ft_strrchr(str2,'z')); // == s + strlen (s) //
}
/*
#include "libft.h"

int	main(void)
{
	char str1[] = "tripouille";
	char str2[] = "tripouille";
	printf("strrchr : dans %s, recherche %s\n", str1, strrchr(str1,'l')); 
	printf("strrchr : dans %s, recherche %s\n", str1, strrchr(str1,'z')); 
	printf("ft_strrchr : dans %s, recherche %s\n", str2, ft_strrchr(str2,'l')); // == s+8 //
	printf("ft_strrchr : dans %s, recherche %s\n", str2, ft_strrchr(str2,'z')); // == s + strlen (s) //
}
*/