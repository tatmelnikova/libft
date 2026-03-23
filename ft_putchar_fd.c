#include "libft.h"

// Outputs the character ’c’ to the given file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	return 0;
}
*/