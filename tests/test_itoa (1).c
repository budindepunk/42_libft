
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
    if (n == 0)
        count = 1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static void	populate(int i, int length, int n, char *new)
{
	int	count;

	count = length - 1;
	if (n < 0)
	{
		n *= -1;
		new[0] = '-';
	}
	while (i < length)
	{
		new[count] = (n % 10) + '0';
		n /= 10;
		count--;
		i++;
	}
	new[length] = '\0';
}

char	*ft_itoa(int n)
{
	int	i;
	int	length;
	char	*new;

	length = count_digits(n);
	i = 0;
	if (n < 0)
	{
		i = 1;
		length++;
	}
	new = (char *)malloc(sizeof(char) * length);
    if (!new)
        return (NULL);
	populate(i, length, n, new);
    printf("%s\n",new);
	return (new);
}

void main(void)
{
    ft_itoa(0);
}