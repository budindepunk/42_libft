#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static int  count_words(char const *s, char c)
{
    int count;
    int i;
    int check;

    i = 0;
    count = 0;
    check = 0;
    while (s[i])
    {
        if (s[i] != c && check == 0)
        {
            count++;
            check = 1;
        }
        else if (s[i] == c)
            check = 0;
        i++;
    }
    return (count);
}

static int find_index(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (i);
}

char **ft_split(char const *s, char c)
{
    char **new;
    int cut_from;
    int cut_to;
    int i;
    // int j;

    new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!new || !s)
        return (NULL);
    i = 0;
    cut_from = 0;
    while (i < count_words(s, c))
    {
        while (s[cut_from] == c)
            cut_from++;
        cut_to = find_index(s + cut_from, c);
        new[i] = (char *)malloc(sizeof(char) * (cut_to + 1));
        if (!new[i])
            return (NULL);
        ft_strlcpy(new[i], s + cut_from, cut_to + 1);
        cut_from += cut_to + 1;
        // j = 0;
        // while (new[i][j])
        // {
        //     write(1, &new[i][j], 1);
        //     j++;
        // }
        // write(1, "\n", 1);
        i++;
    }
    new[i] = '\0';
    return (new);
}

void main(void)
{
    char c = 'a';
    ft_split("hola!carola!raton!sin!cola!", c);
}
