/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:28:12 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/08 18:46:16 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char str1[] = "coucou!";
	char str2[] = "coucou!";
	printf("strchr : dans %s, recherche %s\n", str1, strchr(str1,'u'));
	printf("ft_strchr : dans %s, recherche %s\n", str2, ft_strchr(str2,'u'));
}