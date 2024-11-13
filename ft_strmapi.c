/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:34:22 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/13 11:13:30 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	s1 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s1[i] = f(i, (char) s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
