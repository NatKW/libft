/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:15:24 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/22 13:15:33 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1 = "bonjour ";
	const char	*s2 = "Nathalie";
	
	printf("RESULT : %s\n", ft_strjoin(s1, s2));
}
