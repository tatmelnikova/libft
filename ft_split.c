/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:17:34 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 14:15:47 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c && in_word)
		{
			count++;
			in_word = 0;
		}
		if (*s != c && !in_word)
		{
			in_word = 1;
		}
		s++;
	}
	if (in_word)
		count++;
	return (count);
}

static size_t	find_end_pos(char *s, size_t start_from, char c)
{
	size_t	pos;

	pos = start_from;
	while (s[pos] != c && s[pos])
		pos++;
	return (pos);
}

static size_t	find_start_position(char *s, size_t start_from, char c)
{
	size_t	pos;

	pos = start_from;
	while (s[pos] == c && s[pos])
		pos++;
	return (pos);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	end_pos;
	size_t	start_pos;
	size_t	word_pos;

	count = count_words(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	end_pos = 0;
	word_pos = 0;
	while (word_pos < count)
	{
		start_pos = find_start_position((char *)s, end_pos, c);
		end_pos = find_end_pos((char *)s, start_pos, c);
		result[word_pos] = malloc(sizeof(char) * (end_pos - start_pos + 1));
		if (result[word_pos])
			ft_strlcpy(result[word_pos], s + start_pos,
				end_pos - start_pos + 1);
		start_pos = end_pos;
		word_pos++;
	}
	result[word_pos] = NULL;
	return (result);
}

// int main(void)
// {
// 	int res;
// 	char *s = "xxxxxxxxhello!";
// 	char c = 'x';
// 	size_t	pos = 0;

// 	res = count_words(s, c);
// 	printf("words count = %d\n", res);
// 	char **result = ft_split(s, c);
// 	while (pos < res)
// 	{
// 		printf("%s\n", result[pos]);
// 		pos++;
// 	}
// 	return (0);
// }
// printf("len = %d, start = %d, end = %d\n", end_pos -
// start_position, start_position, end_pos);
// char *s = "lorem ipsum dolor sit amet, consectetur
//  adipiscing elit. Sed non risus. Suspendisse";