/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:32:48 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 19:09:37 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros
// (bytes containing '\0') to that area.
void	ft_bzero(void *b, size_t n)
{
	char	*p;

	p = (char *)b;
	while (n > 0)
	{
		*p = '\0';
		n--;
		p++;
	}
}
