#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(*s1) *(strlen(s1) + strlen(s2) + 1));
	if(!str)
		return (NULL);
	while(s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[i] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char s1[] = "I love you";
	char s2[] = " Nastinka";
    printf("%s\n", ft_strjoin(s1, s2));
    return 0;
}
