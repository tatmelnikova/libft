/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:42:20 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 19:07:40 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_strlcat() function concatenetes strings. ft_strlcat takes
// the full size of the buffer (not just the length) and guarantees
// to NUL-terminate the result (as long as there is at least one
// byte free in dst). Note that a byte for the NUL should be 
// included in size.  Only operates on true “C” strings.
// For strlcat() both src and dst must be NUL-terminated
// The strlcat() function appends the NUL-terminated string src
// to the end of dst.  It will append at most 
// size - strlen(dst) - 1 bytes, NUL-terminating the result.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	space_left;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (dst_len > size)
		return (size + ft_strlen((char *)src));
	space_left = size - dst_len - 1;
	i = 0;
	while (i < space_left && src[i] != '\0')
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + ft_strlen((char *)src));
}
