/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:17:34 by obouftou          #+#    #+#             */
/*   Updated: 2024/11/06 18:10:57 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

static int	count_word(const char *s, char c);
int			ft_fill(char **s1, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**s1;

	if (s == NULL)
		return (NULL);
	words = 0;
	words = count_word(s, c);
	s1 = malloc((words + 1) * sizeof(char *));
	if (s1 == NULL)
		return (NULL);
	s1[words] = NULL;
	if (ft_fill(s1, s, c))
		return (NULL);
	return (s1);
}

static int	malloc_safe(char **s1, int position, size_t buffer)
{
	int	i;

	i = 0;
	s1[position] = malloc(buffer);
	if (s1[position] == NULL)
	{
		while (i < position)
		{
			free(s1[i++]);
		}
		free(s1);
		return (1);
	}
	return (0);
}

int	ft_fill(char **s1, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (malloc_safe(s1, i, len + 1))
				return (1);
			ft_strlcpy(s1[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

static int	count_word(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

// dazai is the best;
/*int main ()
{
	char *s = "dazai is the";
	char **s1 = ft_split(s, ' ');
	while(*s1)
	{
		printf("%s\n", *s1++);
	}
}

#include<stdio.h>
int main() {

    // Edge Case 1: NULL string
    char *s1 = NULL;
    char **result1 = ft_split(s1, ' ');
	printf("Result for NULL string: %s\n"
	, result1 == NULL ? "NULL" : "Not NULL");


   // Edge Case 2: Empty string
    char *s2 = "";
    char **result2 = ft_split(s2, ' ');
    printf("Result for empty string: %s\n", result2[0] == NUL
	L ? "NULL" : "Not NULL");

// Edge Case 3: String with only delimiters
//char *s3 = "   ";
// char **result3 = ft_split(s3, ' ');
//printf("Result for string with only delimiter
//s: %s\n", result3[0] == NULL ? "NULL" : "Not NULL");

    Edge Case 4: String with no delimiters
  char *s4 = "singleword";
    char **result4 = ft_split(s4, ' ');
    printf("Result for string with no delimiters: %s\n"
	, result4[0] ? result4[0] : "NULL");

    // Edge Case 5: String with multiple consecutive delimiters
    char *s5 = "word1,,word2";
    char **result5 = ft_split(s5, ',');
    printf("Result for string with multiple consecutive delimiters:\n");
    for (int i = 0; result5[i] != NULL; i++) {
        printf("%s\n", result5[i]);
    }
    return 0;
}*/
