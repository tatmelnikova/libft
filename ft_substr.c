/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:02:30 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/19 15:02:30 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	i = 0;
	while (start > 0 && *s)
	{
		s++;
		start--;
	}
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (ft_calloc(1, sizeof(char)));
	if (start + len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	sstr = malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	while (i < len && *s)
	{
		sstr[i] = *s++;
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}

// int	main(void)
// {
	// char	*str = "i just want this part #############";
	// size_t	size = 22;

	// char	*res = ft_substr(str, 0, size);
	// printf("%s", res);
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;

// 	if (!(strsub = ft_substr(str, 0, 10)))
// 		printf("NULL");
// 	else
// 		printf("%s", strsub);
// 	if (str == strsub)
// 		printf("\nA new string was not returned");
// }