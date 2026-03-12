/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:42:08 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 15:10:56 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The memcmp() function compares the first n bytes (each 
// interpreted as unsigned char) of the memory areas s1 and s2.
//  The memcmp() function returns an integer less than, equal to,
// or greater than zero if the first n bytes of s1 is found,
// respectively, to be less than, to match, or be greater than 
// the first n bytes of s2.
// For a nonzero return value, the sign is determined by the sign
// of the difference between the first pair of bytes (interpreted
//  as  unsigned char) that differ in s1 and s2.
// If n is zero, the return value is zero.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = s1;
	m2 = s2;
	while (n > 0)
	{
		if (*m1 != *m2)
		{
			return (*m1 - *m2);
		}
		m1++;
		m2++;
		n--;
	}
	return (0);
}
