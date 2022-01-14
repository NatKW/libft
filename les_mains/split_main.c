/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:42:48 by nade-la-          #+#    #+#             */
/*   Updated: 2022/01/14 18:55:21 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	const char	s[] = "       split       this for   me  !       ";
	char		c;
	char		**tab;
	int			i;

	i = 0;
	c = ' ';
	while (tab[i])
	{
		tab = ft_split(s, c);
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
