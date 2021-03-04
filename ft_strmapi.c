

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if(!s || !f)
		return (NULL);
	if(!(str = malloc(sizeof(char *) * (strlen(s) + 1))))
		return (NULL);
	while(s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
