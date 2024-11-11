/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:21:39 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/03 18:30:18 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1len;
	size_t			s2len;
	unsigned char	*join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	join = malloc(s1len + s2len + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1len);
	ft_memcpy(&join[s1len], s2, s2len);
	join[s1len + s2len] = '\0';
	return ((char *)join);
}

/*#include<stdio.h>
int main ()
{
	const char *s1 = "";
	const char *s2 =  "";
	char *res = ft_strjoin(s1, s2);
	if (res)
	{
		printf("%s\n", res);
	free(res);
	}
	else
	{
		printf("null returned\n");
	}
}*/
