/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:47:21 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/17 17:34:59 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	result, result1;
// 	for (int i = -1; i < 530; i++)
// 	{
// 		result = ft_isalpha(i);
// 		result1 = isalpha(i);
// 		if (!!result1 != !!result)
// 		{
// 			return 1;
// 		}
// 	}

// 	return (0);
// }
