/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:18:38 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 17:12:16 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlen() function calculates the length of the string pointed
// to by s, excluding the terminating null byte ('\0').
int	ft_strlen(char *str)
{
	char	c;
	int		count;

	c = *str;
	count = 0;
	while (c != '\0')
	{
		count++;
		str++;
		c = *str;
	}
	return (count);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_strlen("asd3455663");
// 	i = ft_strlen("");
// 	i = ft_strlen("a");
// 	return (0);
// }
