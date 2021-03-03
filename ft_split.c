#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		counter(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while(s[i] == c && s[i] != '\0')
		i++;
	if(s[i] != c)
		word++;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			while(s[i] == c && s[i] != '\0')
				i++;
			if(s[i] != '\0')
				word++;
		}
		else
			i++;
	}
	return (word);
}

char	allocating(const char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	while(s[i] != c && s[i] != '\0')
		i++;
	if(!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	ft_strlcpy(str, s, i + 1);
	printf("%s\n", str);
	return (str);
}

char 	**ft_split(char const *s, char c)
{
	char	**str;
	int		word;
	int		i;
	int		d;

	i = -1;
	d = 0;
	printf("hi\n");
	word = counter(s, c);
	if(!s)
		return (0);
	if(!(str = malloc(sizeof(*s) * (word + 1))))
		return (0);
	while(++i < word)
	{
		printf("%d\n", i);
		while(s[d] == c)
		{
			printf("st\n");
			d++;
		}
		if(!(str[i] = allocating(s, c)))
		{
			while(i > 0)
				free(str[i--]);
			free(str);
			return (0);
		}
		s = s[d + ft_strlen(str[i])];
	}
	printf("%s\n", str);
	str[i] = '\0';
	return (str);
}

int main()
{
	char str[] = "I'm amazing happy face";
    printf("%s\n", ft_split(str, ' '));
    return 0;
}
