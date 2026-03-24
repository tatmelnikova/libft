/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:19:31 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 17:08:56 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The strrchr() function returns a pointer to the last occurrence
// of the character c in the string s.
// The strrchr() function returns a pointer to the
// matched character or NULL if the character is not found.
// The terminating null byte is considered part of the string, so
// that if c is specified as '\0', these functions return a 
// pointer to the terminator.
char	*ft_strrchr(const char *s, int c)
{
	char	*last_match;

	last_match = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_match = (char *)s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		last_match = (char *)s;
	return (last_match);
}

// int main(void)
// {
// 	char 	*result;
// 	char	str2[] = "bonjour";
// 	int chr;

// 	chr = (int)'s';
// 	result = strrchr(str2, chr);
// 	return 0;
// }