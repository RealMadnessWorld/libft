#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int i, size_t len)
{
	size_t	c;
	char	*temp;

	c = 0;
	temp = malloc(sizeof(*s) * (len + 1));
	if(!temp)
		return (NULL);
	while(c < len)
	{
		temp[c] = s[i];
		i++;
		c++;
	}
	temp[c] = '\0';
	return (temp);
}

int main()
{
	char str[] = "ola my name is";
    printf("%s", ft_substr(str, 4, 30));
	free(ft_substr(str, 3, 500));
    return 0;
}
