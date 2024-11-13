/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:48:48 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/13 17:38:42 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ch, int c)
{
	char			c2;
	char			*lst_pre;

	lst_pre = NULL;
	c2 = (char)c;
	while (*ch)
	{
		if (*ch == c2)
		{
			lst_pre = (char *)ch;
		}
		ch++;
	}
	if (*ch == c2)
	{
		lst_pre = (char *)ch;
	}
	return (lst_pre);
}
