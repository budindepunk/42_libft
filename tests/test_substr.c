#include "libft.h"

char	*ft_substr_guy(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if ((dst = malloc(sizeof(char))) == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
        dst = malloc(sizeof(char) * (len + 1));
		if (!dst)
			return (NULL);
		i = 0;
        while (i < len + 1)
        {
            dst[i] = s[start + i];
            i++;
        }
        dst[i] = '\0';
		return (dst);
	}
}

char	*ft_substr_mine(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	if (!s || (size_t)start >= ft_strlen(s) || start < 0)
	{
		new[0] = '\0';
		return (new);
	}
	i = 0;
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>
int main(void)
{
    printf("test 1. manda 'hola', 0, -1. quiere 'hola'\n");
    printf("guy: %s\n", ft_substr_guy("hola", 0, -1));
    printf("mine: %s\n", ft_substr_mine("hola", 0, -1));
    
    printf("test 2. manda '', -1, -1. quiere ''\n");
    printf("guy: %s\n", ft_substr_guy("hola", -1, -1));
    printf("mine: %s\n", ft_substr_mine("hola", -1, -1));

    printf("test 3. manda 'hola', -1, 0. quiere ''\n");
    printf("guy: %s\n", ft_substr_guy("hola", -1, 0));
    printf("mine: %s\n", ft_substr_mine("hola", -1, 0));
    return (0);
}