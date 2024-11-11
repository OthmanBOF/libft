/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:24:50 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/09 14:55:31 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tmp;
	size_t slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen <= start)
		return (ft_strdup(""));
	tmp = (char *)malloc(len + 1);
	if(tmp == NULL)
		return (NULL);
	if (slen > start)
	{
		if(start + len < slen)
		{
			len = slen - start;
		}
		ft_memcpy(tmp, &s[start], len);

	}
	tmp[len] = 0;
	return(tmp);
}*/
/*char *ft_substr(char const *s, unsigned int start,size_t len);
#include<stdio.h>
int main()
{
	char const *s = "dazai is the best";
	printf("%s\n", ft_substr(s, 17, 17));
}*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (slen <= start)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	s1 = malloc((len + 1));
	if (s1 == NULL)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
