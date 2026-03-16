/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:47:21 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/16 17:35:11 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_lowercase(char c)
{
	int	result;

	result = 0;
	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	return (result);
}

static int	is_uppercase(char c)
{
	int	result;

	result = 0;
	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	return (result);
}

int	ft_isalpha(int c)
{
	return (is_lowercase(c) || is_uppercase(c));
}

// #include <stdio.h>

// int main(void)
// {
// 	int	result;

// 	result = ft_isalpha((int)'a');
// 	printf("result = %d\n", result);
// 	result = ft_isalpha(0);
// 	printf("result = %d\n", result);
// 	result = ft_isalpha(-9);
// 	printf("result = %d\n", result);
// 	return (result);
// }
