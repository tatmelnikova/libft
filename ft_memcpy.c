/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:38:58 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/16 16:33:26 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The memcpy() function copies n bytes from memory area src to memory
// area dest.  The memory areas must not overlap.  Use mem‐move(3) 
// if the memory areas do overlap.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	if (s == d)
		return (dest);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
