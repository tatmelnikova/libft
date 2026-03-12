/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:21:52 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 15:30:49 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	position;

	position = 0;
	while (position < len)
	{
		if (big[position] != little[position])
		{
			return (big[position]);
		}
		position++;
	}
	return (NULL);
}

//#include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str = "543a---fdhkks";
// 	char	*to_find = "1a--";
// 	//char	*str = "";
// 	//char	*to_find = "";
// 	char	*found_pointer;
// 	char	*expected_pointer;
// 	found_pointer = ft_strstr(str, to_find);
// 	expected_pointer = strstr(str, to_find);
// 	if (found_pointer != expected_pointer)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }
// DESCRIPTION
// The  strstr()  function finds the first occurrence
// of the substring needle in the string haystack.
// The terminating null bytes ('\0') are not compared.
// The strcasestr() function is like strstr(), 
// but ignores the case of both arguments.
// RETURN VALUE
// These functions return a pointer to the beginning of
// the located substring, or NULL if the substring is not found.
