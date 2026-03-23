#include "libft.h"

// Outputs the integer ’n’ to the specified file descriptor.
void	ft_putnbr_fd(int n, int fd)	
{
	char *result;

	result = ft_itoa(n);
	ft_putstr_fd(result, fd);
	free(result);
}


// int main(void)
// {
// 	ft_putnbr_fd(1, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(11, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	return 0;
// }