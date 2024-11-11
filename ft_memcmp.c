/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:32:48 by obouftou          #+#    #+#             */
/*   Updated: 2024/10/29 19:44:14 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;



    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {

            return (str1[i] - str2[i]);
        }
        i++;
    }
    return 0;
}
*/
/*#include <stdio.h>
#include <string.h>

int main() {
    // Define two byte arrays
    unsigned char arr1[] = {0x01, 0x02, 0x03, 0x04};
    unsigned char arr2[] = {0x01, 0x02, 0x03, 0x05};

    // Compare the first 4 bytes of arr1 and arr2
    int result = ft_memcmp(arr1, arr2, 5);

    if (result < 0) {
        printf("arr1 is less than arr2\n");
    } else if (result > 0) {
        printf("arr1 is greater than arr2\n");
    } else {
        printf("arr1 is equal to arr2\n");
    }

    // Compare only the first 3 bytes
    result = ft_memcmp(arr1, arr2, 3);

    if (result < 0) {
        printf("arr1 is less than arr2 (first 3 bytes)\n");
    } else if (result > 0) {
        printf("arr1 is greater than arr2 (first 3 bytes)\n");
    } else {
        printf("arr1 is equal to arr2 (first 3 bytes)\n");
    }

    return 0;
}*/
