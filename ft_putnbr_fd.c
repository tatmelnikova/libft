/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:13:58 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 15:25:57 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the integer ’n’ to the specified file descriptor.
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	u_n;

	if (n < 0)
	{
		u_n = -n;
		write(fd, "-", 1);
	}
	else
		u_n = n;
	if (u_n >= 10)
		ft_putnbr_fd(u_n / 10, fd);
	ft_putchar_fd(u_n % 10 + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(1, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(11, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	return 0;
// }