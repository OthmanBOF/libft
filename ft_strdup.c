/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:21:05 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/05 22:15:32 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(ft_strlen(s1) + 1);
	if (tmp == NULL)
		return (NULL);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
//  #include <stdio.h>
// #include<string.h>
// int main ()
// {
// //printf("%s\n", ft_strdup(s1));
// 	printf("%s", ft_strdup(NULL));

// }
