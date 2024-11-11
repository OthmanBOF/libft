/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:10:15 by obouftou          #+#    #+#             */
/*   Updated: 2024/10/25 11:30:03 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int l)
{
	if (l >= 'A' && l <= 'Z')
		return (l + 32);
	return (l);
}
/*int main ()
{
	int x = '?';
	char lower = ft_tolower(x);
	printf("%c", lower);
}
*/
