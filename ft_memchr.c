/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:35:55 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 14:41:23 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

//The  memchr()  function  scans the initial n bytes of the memory
// area pointed to by s for the first instance of c.  Both c and 
// the bytes of the memory area pointed to by s are interpreted
// as unsigned char.
// The memchr() and memrchr() functions return a pointer to the
// matching byte or NULL if the character does not  occur  in  
// the  given  memory area.
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char) c)
			return (str);
		n--;
	}
	return (NULL);
}
