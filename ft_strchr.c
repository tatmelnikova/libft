/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:13:24 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 14:18:07 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The strchr() function returns a pointer to the first occurrence 
// of the character c in the string s.
// The strchr() function return a pointer to the matched character
// or NULL if the character is not found.  The terminating null
// byte is considered part of the string, so that if c is
// specified as '\0', these functions return a pointer to the terminator.
char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (s[i]);
	return (NULL);
}
