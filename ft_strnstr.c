/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:25:14 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/11 10:26:15 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;

	if (*needle == 0)
    return (haystack);
    while (haystack[i] && i < len )

}*/

/*#include <stdio.h>
#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int main() {
    const char *haystack = "Hello, ChatGPT!";
    const char *needle = "Cha";
    size_t len = 5;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Found: %s\n", result);
        else {
        printf("found within first %zu characters.\n", len);
    }

    return 0;
}*/
/*check first
		for the the index that containes the same firs char as needle
		check if the rest of len can hold needlelen;
		compare the rest to the needle untile we finde
		the needle in hystack
	//return a pinter to the start of the matsh*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (haystack[i] == *needle
			&& len - i >= nlen
			&&ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	char *nedle = "\0\0";
// 	char *haysack = "im dazai\0\0 im li nak mok";

// 	printf("%s\n", ft_strnstr(haysack, nedle, 20));
// 	printf("%s\n", strnstr(haysack, nedle, 20));
// }
