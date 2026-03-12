/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:16:59 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 15:16:15 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*d;

	d = dst;
	if (n > 0)
	{
		while (n > 0)
		{
			*d = (unsigned char)c;
			n--;
			d++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// }