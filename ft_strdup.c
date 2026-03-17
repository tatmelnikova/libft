/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:24:00 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/17 18:28:55 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

static char	*ft_strcpy(char *dest, char *src)
{
	int		end_symb_found;
	int		position;

	end_symb_found = 0;
	position = 0;
	while (end_symb_found == 0)
	{
		dest[position] = src[position];
		if (dest[position] == '\0')
		{
			end_symb_found = 1;
		}
		position++;
	}
	return (dest);
}

static int	ft_strlen(char *str)
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

char	*ft_strdup(const char *str)
{
	int		strlen;
	char	*dup_str;

	strlen = ft_strlen((char *)str);
	dup_str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (dup_str == NULL)
		return (NULL);
	ft_strcpy(dup_str, (char *)str);
	return (dup_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*dup;

// 	str = "123412";
// 	dup = ft_strdup(str);
// 	printf("dup = %s\n", dup);
// 	free(dup);
// 	return (0);
// }
// The  strdup()  function returns a pointer 
// to a new string which is a duplicate of the 
// string s.  Memory for the new string is obtained 
// with malloc(3), and can be freed with free(3).
// RETURN VALUE
// On success, the strdup() function returns a pointer
// to the duplicated string.  It returns NULL  if  in‐
// sufficient memory was available, with errno
// set to indicate the cause of the error.