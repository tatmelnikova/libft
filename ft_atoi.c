/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:26:32 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/10 17:35:49 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char *c)
{
	if (*c == ' ' || *c == '\f' || *c == '\n' || *c == '\r')
	{
		return (1);
	}
	if (*c == '\t' || *c == '\v')
	{
		return (1);
	}
	return (0);
}

char	*find_non_space(char *str)
{
	while (str)
	{
		if (!is_space(str))
		{
			return (str);
		}
		str++;
	}
	return (str);
}

char	*sign_is_positive(int *sign, char *str)
{
	int	sign_is_plus;
	int	i;

	i = 0;
	sign_is_plus = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign_is_plus = sign_is_plus * -1;
		}
		i++;
	}
	*sign = sign_is_plus;
	return (&str[i]);
}

int	get_number(char *str)
{
	int	number;

	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	char	*search_position;
	int		is_positive;
	int		number;

	is_positive = 1;
	search_position = find_non_space(str);
	search_position = sign_is_positive(&is_positive, search_position);
	number = get_number(search_position);
	return (is_positive * number);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*test_string;
// 	int		result;
// 	test_string = "567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v---567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v-+-+-67a89";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "   ---+--+1234ab567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "   ---+--+01234ab567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "   --+--+1234ab567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "   --+--+0";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// }
// the complete list of whitespace characters is:
// ‘ ’
// Space character.
// \f
// Form feed.
// \n
// New-line.
// \r
// Carriage return.
// \t
// Horizontal tab.
// \v
// And vertical tab.