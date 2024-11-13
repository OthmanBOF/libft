/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:27:02 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/12 21:02:30 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_s(int c)
{
	int	len;

	len = 0;
	if (c == 0)
		return (1);
	if (c < 0)
		len = 1;
	c *= -1;
	while (c != 0)
	{
		c /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int c)
{
	char			*str;
	unsigned int	len;
	long int		n2;

	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_number_s(c);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (c < 0)
	{
		str[0] = '-';
		c = -c;
	}
	n2 = c;
	if (n2 == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n2 != 0)
	{
		str[--len] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	return (str);
}
