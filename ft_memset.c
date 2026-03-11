/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:16:59 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/11 15:31:14 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *dst, int c, size_t n)
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