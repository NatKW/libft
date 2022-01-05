/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:58:36 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/30 14:59:02 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	main(void)
{
	char const	*s = "bcdHello Worldabcd";
	char const	*set = "abcd";
	
	printf("RESULT : %s", ft_strtrim(s, set));
	return (0);
}