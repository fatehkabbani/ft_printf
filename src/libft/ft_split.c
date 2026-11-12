/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:42:53 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 01:12:00 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	ft_issep(char c, char sep)
{
	return (c == sep || c == '\0');
}

static int	count_word(char const *str, char sep)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (!ft_issep(str[i], sep) && ft_issep(str[i + 1], sep))
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static char	*copy_word(char *s, int start, int i, char *curr_word)
{
	int	j;

	j = 0;
	curr_word = malloc(sizeof(char) * (i - start + 1));
	while (start < i)
	{
		curr_word[j] = s[start];
		j++;
		start++;
	}
	curr_word[j] = '\0';
	return (curr_word);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		cw;
	char	**arr;

	start = 0;
	end = 0;
	cw = 0;
	arr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!arr)
		return (NULL);
	while (cw < count_word(s, c))
	{
		while (s[start] && ft_issep(s[start], c))
			start++;
		end = start;
		while (s[end] && !ft_issep(s[end], c))
			end++;
		arr[cw] = copy_word((char *)s, start, end, arr[cw]);
		start = end;
		cw++;
	}
	arr[cw] = NULL;
	return (arr);
}
