/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:36:48 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/12 19:20:58 by obouftou         ###   ########.fr       */
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
