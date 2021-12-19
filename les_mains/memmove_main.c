/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nade-la- <nade-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:50:45 by nade-la-          #+#    #+#             */
/*   Updated: 2021/12/10 11:39:59 by nade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    main(void)
{
    char    src1[50] = {65, 66, 67, 68, 69, 0, 45};
    char    dest1[50] = { 0,  0,  0,  0,  0,  0, 0};
    char    src2[50] = {65, 66, 67, 68, 69, 0, 45};
    char    dest2[50] = { 0,  0,  0,  0,  0,  0, 0};
	char    src3[50] = {67, 68, 67, 68, 69, 0, 45};
    char    dest3[50] = {67, 67, 68, 68, 69, 0, 45};
    char    src4[50] = {67, 68, 67, 68, 69, 0, 45};
    char    dest4[50] = {67, 67, 68, 68, 69, 0, 45};

    printf("memmove originale : %s\n", (char *)memmove(dest1, src1, 7));
    printf("ma fonction memmove : %s\n", (char *)ft_memmove(dest2, src2, 7));
	printf("memmove originale : %s\n", (char *)memmove(dest3, src3, 7));
    printf("ma fonction memmove : %s\n", (char *)ft_memmove(dest4, src4, 7));
}
