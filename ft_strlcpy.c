/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:34:07 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 18:26:17 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

// The strlcpy() function copy strings. strlcpy() takes the full 
// size of the buffer (not just the length) and guarantees to 
// NUL-terminate the result (as long as size is larger than 0 or,
// in the case of strlcat(), as long as there is at least one byte
// free in dst). Note that a byte for the NUL should be included in 
// size.  strlcpy() only operates on true “C” strings.
// This means that for strlcpy() src must be NUL-terminated.
// The strlcpy() function copies up to size - 1 characters from the 
// NUL-terminated string src to dst, NUL-terminating the result.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
