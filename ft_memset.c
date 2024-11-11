/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:26:06 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/04 18:02:36 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len -1] = c;
		len--;
	}
	return (b);
}
// #include<stdio.h>
// int main ()

// {
// 	int b = 0;
// 	char *char_b = (char *)&b;

// 	/*ft_memset(&b, 57, 1);
// 	ft_memset((char *)&b + 1, 5, 1);
// 	for (int i = 0; i < sizeof(int); i++)
// 	{
// 		printf("%d", char_b[i]);
// 		printf("\n");
// 	}
// 	printf("%d", b);*/
// 	ft_memset(&b, 199, 1);
// 	ft_memset((char *)&b + 1, 250, 1);
// 	ft_memset((char *)&b + 2, 255, 1);
// 	ft_memset((char *)&b + 3, 255, 1);
// 	printf("%d", b);
// }
// 1337 to binary 00000000 00000000 00000101 00111001
// -1337 to binary 11111111 11111111 11111010 11000111
