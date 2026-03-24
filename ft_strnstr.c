/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:21:52 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 18:21:52 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	compare_substrings(char *find_in, char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (find_in[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

// The strnstr() function locates the first occurrence of the 
// null-terminated string little in the string big, where not more
// than len characters are searched.  Characters that appear 
// after a ‘\0’ character are not searched.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	big_len;
	size_t	search_len;

	if (*little == '\0')
		return ((char *)big);
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (len > big_len)
		search_len = big_len;
	else
		search_len = len;
	i = 0;
	while (i + little_len <= search_len && big[i] != '\0')
	{
		if (compare_substrings((char *)&big[i], (char *)little, little_len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <unistd.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	*str = "abc";
// 	char	*to_find = "xyz";
// 	char	*found_pointer;
// 	char	*expected_pointer;
// 	int		len;

// 	len = 1;
// 	found_pointer = ft_strnstr(((void*)0), "fake", 3);
// 	expected_pointer = strnstr(str, to_find, len);
// 	char *test_pointer = ft_strnstr_t(((void*)0), "fake", 3);
// 	printf("pointer = %p", test_pointer);
// 	if (found_pointer != expected_pointer)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }
