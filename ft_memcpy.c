/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:54:50 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/06 12:57:09 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p1;
	unsigned const char	*p2;

	if (!dst && !src)
		return (0);
	if (src == dst)
		return (dst);
	p1 = (unsigned char *) dst;
	p2 = (unsigned const char *) src;
	while (n > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (dst);
}
/*#include<stdio.h>
int main()
{
    char src[] = "hello";
    char dst[10];
    printf("befor : %s\n", dst);
    printf("after : %s\n", ft_memcpy(dst, src, 10));
}*/
