/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:21:52 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/17 15:46:38 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	compare_substrings(char *find_in, char *to_find, int len)
{
	int		position;

	position = 0;
	while (position < len && find_in[position] != '\0')
	{
		if (find_in[position] != to_find[position])
		{
			return (0);
		}
		position++;
	}
	return (1);
}

// The strnstr() function locates the first occurrence of the 
// null-terminated string little in the string big, where not more
// than len characters are searched.  Characters that appear 
// after a ‘\0’ character are not searched.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	position;
	int		result;
	char	*find_in;
	char	*to_find;

	find_in = (char *)big;
	to_find = (char *)little;
	position = 0;
	if (!len)
		return (NULL);
	if (!to_find)
		return (find_in);
	while (find_in && position < len - ft_strlen(to_find))
	{
		result = compare_substrings(find_in, to_find, ft_strlen(to_find));
		if (result)
		{
			return (find_in);
		}
		find_in++;
		position++;
	}
	return (NULL);
}

// #include <unistd.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	*str = "lorem ipsum dolor sit amet";
// 	char	*to_find = "ipsum";
// 	char	*found_pointer;
// 	char	*expected_pointer;
// 	int		len;

// 	len = 15;
// 	found_pointer = ft_strnstr(str, to_find, len);
// 	expected_pointer = strnstr(str, to_find, len);
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
