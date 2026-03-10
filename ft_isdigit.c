/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:29:34 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/10 16:59:55 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main(void)
// {
// 	int	result;

// 	result = ft_isdigit('0');
// 	result = ft_isdigit('f');
// 	result = ft_isdigit('-');
// 	return (result);
// }
