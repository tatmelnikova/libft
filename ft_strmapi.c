#include "libft.h"

// Applies the function ’f’ to each character of the string ’s’ 
// to create a new resulting string containing the symbols
// obtained from the transformation. 
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result || !s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char map_fn(unsigned int i, char c)
{
	return (c + i);
}

int main(void)
{
	char *result = ft_strmapi("aaaaaaa", map_fn);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return 0;
}
*/