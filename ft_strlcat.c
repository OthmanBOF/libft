/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:20 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/07 11:33:57 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);


    if (dstsize >= src_len + dst_len)
    {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1 );
    }
    return (src_len + dst_len);

}*/

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len = ft_strlen(src);
    size_t dst_len = ft_strlen(dst);


    if (dstsize <= dst_len)
    {
        return (dstsize + src_len);
    }


    size_t copy_len;

    copy_len = dstsize - dst_len - 1;


    if (copy_len > 0)
    {
        ft_memcpy(dst + dst_len, src, copy_len);
        dst[dst_len + copy_len] = '\0';
    }

    return (dst_len + src_len);
}*/

// #include <stdio.h>
// int main ()
// {
// 	const char *s = "dazai";
// 	 char *d;
// 	size_t n = 10;
// 	ft_strlcat(d, s, n);
// 	printf("%s\n", d);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = ft_strlen(src);
	i = 0;
	while (dlen < size && dst[dlen] != '\0')
		dlen++;
	if (size <= dlen)
		return (size + slen);
	while (src[i] && (dlen + i < size - 1))
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// //  printf("%zu\n", ft_strlcat(NULL, "NULL", 1));
// printf("%zu\n", strlcat(NULL,  "NULL", 1));
// }
