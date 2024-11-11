/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:38:44 by obouftou          #+#    #+#             */
/*   Updated: 2024/10/29 17:25:53 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		ch;

	i = 0;
	str = (unsigned char *) s;
	ch = (unsigned char ) c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, World!";
    char ch = 'W';
    char *result;

    // Search for the first occurrence of 'W' in the string
    result = memchr(str, ch, ft_strlen(str));

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}*/
