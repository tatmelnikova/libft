/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:26:32 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/17 15:52:43 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(const char *c)
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

static char	*find_non_space(const char *str)
{
	while (str)
	{
		if (!is_space(str))
		{
			return ((char *) str);
		}
		str++;
	}
	return ((char *) str);
}

static char	*get_sign(int *sign, char *str)
{
	int	sign_is_positive;

	sign_is_positive = 1;
	if (str[0] == '+')
	{
		sign_is_positive = 1;
		str++;
	}
	else if (str[0] == '-')
	{
		sign_is_positive = -1;
		str++;
	}
	*sign = sign_is_positive;
	return (str);
}

static int	get_number(char *str)
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
	search_position = get_sign(&is_positive, search_position);
	number = get_number(search_position);
	return (is_positive * number);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*test_string;
// 	int		result;

// 	test_string = "+-54";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = "567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v-567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v+567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v---567";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
// 	test_string = " \n\t\f\r\v-+-+-67a89";
// 	result = ft_atoi(test_string);
// 	printf("%s = %d\n", test_string, result);
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