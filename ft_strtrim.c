/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:45:49 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/19 14:45:49 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

int	to_trim(char c, char const *set)
{
	char	*s;

	s = (char *)set;
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1);
	while (to_trim(s1[start], set))
		start++;
	if (start >= end)
		return (ft_strdup(""));
	end--;
	while (to_trim(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// int	main(void)
// {
// 	char *str = "ab cd  f    ";
// 	char *set = " \v\t";
// 	char *res = ft_strtrim(str, set);
// 	printf("%s", res);
// }
