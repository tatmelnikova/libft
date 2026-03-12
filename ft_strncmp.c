/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkazmina <tkazmina@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:59:52 by tkazmina          #+#    #+#             */
/*   Updated: 2026/03/12 14:34:40 by tkazmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The  strncmp()  function  compares the the first (at most) 
// n bytes of s1 and s2.  The locale is not taken into account
// The comparison is done using unsigned characters. strcmp() 
// returns an integer indicating the result of the comparison:
// • 0, if the s1 and s2 are equal;
// • a negative value if s1 is less than s2;
// • a positive value if s1 is greater than s2.
// POSIX.1 specifies only that:
// The  sign  of a nonzero return value shall be determined by 
// the sign of the difference between the values of the first pair
// of bytes (both interpreted as type unsigned char) that differ in
// the strings being compared.
// In glibc, as in most other implementations, the return value is
// the arithmetic result of subtracting the last compared byte in s2 
// from the last compared byte in s1. (If the two characters are 
// equal, this difference is 0.)
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		result;
// 	int		result1;
// 	int 	end_result;
// 	unsigned int	n;
// 	end_result = 0;
// 	s1 = "asdb";
// 	s2 = "asdb";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "";
// 	s2 = "";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "asdb";
// 	s2 = "asda";
// 	result = ft_strncmp(s1, s2, 3);
// 	result1 = strncmp(s1, s2, 3);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s2 = "asda";
// 	s2 = "asdb";
// 	result = ft_strncmp(s1, s2, 3);
// 	result1 = strncmp(s1, s2, 3);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "asdb";
// 	s2 = "asda";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "asda";
// 	s2 = "asdb";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "";
// 	s2 = "asdb";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "asdf";
// 	s2 = "";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "1";
// 	s2 = "asdb";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "34tas";
// 	s2 = "-";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "\v\t";
// 	s2 = "\v\t";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "0";
// 	s2 = "\v\t";
// 	result = ft_strncmp(s1, s2, 4);
// 	result1 = strncmp(s1, s2, 4);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "";
// 	n = 3;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "";
// 	s2 = "World";
// 	n = 4;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "Hello";
// 	n = 0;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "hELLO";
// 	n = 3;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "Hello";
// 	n = 6;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "World";
// 	n = 10;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "Hellz";
// 	n = 4;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "Hell";
// 	n = 10;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	s1 = "Hello";
// 	s2 = "Hell";
// 	n = 0;
// 	result = ft_strncmp(s1, s2, n);
// 	result1 = strncmp(s1, s2, n);
// 	if (result != result1)
// 	{
// 		end_result++;
// 	}
// 	printf("result = %d\n", end_result);
// 	return (end_result);
// }