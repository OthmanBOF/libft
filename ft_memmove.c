/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:28:22 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/06 13:08:52 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	i = 0;
	if (p1 > p2)
		while (len-- > 0)
			p1[len] = p2[len];
	else
	{
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (p1);
}
