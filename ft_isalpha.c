/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:47:21 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/10 16:57:21 by tkazmina         ###   ########.fr       */
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

// int main(void)
// {
// 	int	result;

// 	result = ft_str_is_alpha("jhkfads8");
// 	result = ft_str_is_alpha("");
// 	result = ft_str_is_alpha("jhkfads");
// 	return (result);
// }
