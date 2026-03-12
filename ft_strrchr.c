/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:19:31 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 19:04:35 by tkazmina         ###   ########.fr       */
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
char	*strrchr(const char *s, int c)
{
	int		i;
	char	*last_match;

	i = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_match = (char *)s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		last_match = (char *)s;
	if (last_match)
		return (last_match);
	return (NULL);
}
