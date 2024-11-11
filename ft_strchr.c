/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:36:48 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/10 18:27:28 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *ch, int c)
{
	unsigned int	i;
	char			c2;

	i = 0;
	c2 = (char)c;
	while (ch[i])
	{
		if (ch[i] == c2)
			return ((char *) &ch[i]);
		i++;
	}
	if (ch[i] == c2)
		return ((char *) &ch[i]);
	return (NULL);
}
/*char	*ft_strchr(const char *s, int c)
{
    while (*s) {
        if (*s == (char)c) {
            return (char *)s; // Return a pointer to the found character
        }
        s++;
    }
    return NULL; // Return NULL if character is not found



}*/
//#include <stdio.h>
//#include <string.h>

/*int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *result = strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
    return 0;
}
int main ()
{
    char *str = "dazai";
    int  c = 'z';
    printf("%s\n", ft_strchr(str, c));
}
*/
// #include <libc.h>
// int main()
// {
// 	char *ptr = strdup("oussama zahdi 1337\n");
// 	ptr[7] = '\0';
//     char *new = ft_strchr(ptr, 'i');
//     char *new2 = strchr(ptr, 'i');
//     printf("new[%s], new2[%s]\n", new, new2);

// }
