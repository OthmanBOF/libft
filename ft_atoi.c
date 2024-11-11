/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:25:47 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/10 18:11:52 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f' || c == '\n')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	int					signe;
	int					i;

	i = 0;
	signe = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if (res > LONG_MAX && signe == 1)
			return (-1);
		if (res > LONG_MAX && signe == -1)
			return (0);
		i++;
	}
	return (res * signe);
}
/*#include<stdio.h>
int main ()
{
	char *str = "99999999999990987654320987654320987654329876543219087654321";
	int res = ft_atoi(str);
	printf("%d\n", res);
}*/
// #include<stdio.h>
// #include<limits.h>
// #include <stdio.h>
// #include<stdio.h>
// // int main ()
// // {

//    // printf("%d\n", ft_atoi(NULL));
//     // printf("%d\n", atoi(NULL));

//     // printf("%d\n", ft_atoi("-9223372036854775809"));
//     // printf("%d\n", atoi("-9223372036854775809"));
//     // printf("%d\n", ft_atoi("2147483648"));
//     // printf("%d\n", atoi("2147483648"));
//     // printf("%d\n", ft_atoi("-2147483649"));
//     // printf("%d\n", atoi("-2147483649"));
// // }
// int main ()
// {
// //------------------------------------------------------------
//     char    str[] = "           +1234gk45";
//     int res = ft_atoi(str);
//     int resx = atoi(str);
//     printf("%d\n", res);
//     printf("%d\n", resx);
// //------------------------------------------------------------
// //------------------------------------------------------------
//     char    str1[] = "  -1234gk45";
//     int res1 = ft_atoi(str1);
//     int res1x = atoi(str1);
//     printf("%d\n", res1);
//     printf("%d\n", res1x);
// //------------------------------------------------------------
// //------------------------------------------------------------
//     char    str2[] = "ab1337cc123";
//     int res2 = ft_atoi(str2);
//     int res2x = atoi(str2);
//     printf("%d\n", res2);
//     printf("%d\n", res2x);
// //------------------------------------------------------------
// //------------------------------------------------------------
//     char    str3[] = "12345678900098765432112345678900987353535353";
//     int res3 = ft_atoi(str3);
//     int res3x = atoi(str3);
//     printf("%d\n", res3);
//     printf("%d\n", res3x);
// //------------------------------------------------------------
// //------------------------------------------------------------
//     char    str4[] = "2147483647";
//     int res4 = ft_atoi(str4);
//     int res4x = atoi(str4);
//     printf("%d\n", res4);
//     printf("%d\n", res4x);
// //------------------------------------------------------------
// //------------------------------------------------------------
//     char    str5[] = "922337203685345678901345678900987353535353";
//     int res5 = ft_atoi(str5);
//     int res5x = atoi(str5);
//     printf("%d\n", res5);
//     printf("%d\n", res5x);
// //------------------------------------------------------------
// }
