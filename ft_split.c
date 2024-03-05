/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:37:12 by namrene           #+#    #+#             */
/*   Updated: 2023/11/10 16:26:42 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			r++;
		while (s[i] != c && s[i])
			i++;
	}
	return (r);
}

static int	longklma(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word++;
			i++;
		}
		if (s[i - 1] != c)
			return (word);
	}
	return (0);
}

static char	**freedd(char **res)
{
	int	i;

	i = 0;
	if (res)
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		j;

	j = 0;
	if (s == 0)
		return (0);
	res = malloc((count(s, c) + 1) * sizeof(char *));
	if (res == 0)
		return (free(res), NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[j] = ft_substr(s, 0, longklma(s, c));
			if (!res[j])
				return (freedd(res));
			s += longklma(s, c);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
/*int main()
{
    const char *test_string = "Ceci|est|un|exemple|de|test";
    char separator = '|';

    int word_count = count(test_string, separator);

    printf("Le nombre de mots dans la chaîne est : %d\n", word_count);

    char **word_array = ft_split(test_string, separator);

    if (word_array)
    {
       
        for (int i = 0; i < word_count; i++)
        {
            printf("Mot %d : %s\n", i, word_array[i]);
            free(word_array[i]); 
        }
        free(word_array); 
    }
    else
    {
        printf("La fonction ft_split a renvoyé NULL.\n");
    }

    return 0;
}*/
