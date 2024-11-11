/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:34:05 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/11 10:01:38 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2 && n <= 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
//#include<string.h>
//#include<stdio.h>
//int main ()
//{
	//char	str1[] = "dbzai";
	// char	str2[] = "dazaa";
	// size_t	x = 5;
	//printf("%d\n",ft_strncmp(NULL, NULL, -1));

	//printf("%d\n",strncmp(NULL, NULL, -1));

//}
