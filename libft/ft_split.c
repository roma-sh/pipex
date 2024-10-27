/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:26:02 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 23:29:37 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_n(const char *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (!s || s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (*(s + i) != c)
		{
			counter++;
			while ((*(s + i)) && (*(s + i) != c))
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static void	free_ar(int words_n, char **ar)
{
	while (words_n >= 0)
	{
		free(ar[words_n]);
		words_n--;
	}
	free(ar);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while ((*(s + i)) && (*(s + i) != c))
		i++;
	return (i);
}

static char	**sub_split(const char *s, char c, char **ar, int words_n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] && i < words_n)
	{
		while (s[j] == c)
			j++;
		ar[i] = ft_substr(s, j, word_len(&*(s + j), c));
		if (ar[i] == NULL)
		{
			free_ar(i, ar);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	ar[i] = NULL;
	return (ar);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**ar_split;

	if (s == NULL)
		return (NULL);
	words = words_n(s, c);
	ar_split = (char **)malloc(((words + 1) * sizeof(char *)));
	if (!ar_split)
		return (NULL);
	return (sub_split(s, c, ar_split, words));
}
