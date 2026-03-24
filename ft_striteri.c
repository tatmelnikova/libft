/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:19:18 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/24 14:19:19 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ on each character of the string passed
// as argument, and passing its index as first argument. Each
// character is passed by address to ’f’ to be modified if necessary
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void map_fn(unsigned int i, char *c)
{
	*c = *c + i;
}

int main(void)
{
	char str[] = "aaaaaa";
	void (*f)(unsigned int, char*) = map_fn;

	ft_striteri(str, f);
	printf("%s\n", str);
	return 0;
}
*/