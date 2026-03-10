/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:29:25 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/10 17:17:00 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	result;

	result = 0;
	if (c >= ' ' && c <= '~')
	{
		result = 1;
	}
	return (result);
}

// int main(void)
// {
// 	int result;

// 	result = ft_str_is_printable("\x01\x05\x0A\x15");
// 	result = ft_str_is_printable(";;jfas18");
// 	result = ft_str_is_printable("");
// 	return result;
// }