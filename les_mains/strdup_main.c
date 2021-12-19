/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:29:12 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/17 18:30:01 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	s1[20] = "abcdefg";
	char	s2[20] = "abcdefg";

	printf("string strdup    = %s \n", strdup(s1));
	printf("string ft_strdup = %s \n", ft_strdup(s2));
}
