/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:16:30 by obouftou          #+#    #+#             */
/*   Updated: 2024/10/30 10:07:02 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize > srclen + 1)
		ft_memcpy(dst, src, srclen + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (srclen);
}
/*#include<stdio.h>
#include<string.h>
int main ()
{
	char dst[1];
	const char src[] = "dazai";

	size_t srclen = strlcpy(dst, src, 5);
	printf("%s\n %s\n %zu\n", dst, src, srclen );
}*/
/*size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;

    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
    {
        ft_memcpy(dst, src, src_len + 1);
    }
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
}*/
