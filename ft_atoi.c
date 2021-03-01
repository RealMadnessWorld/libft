

int		ft_atoi(const char *str)
{
	int neg;
	int n;

	n = 0;
	neg = 1;
	while(*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '+')
			str++;
		else if(*str++ == '-')
			neg = neg * -1;
	}
	while(*str != '\0' && isdigit(*str))
		n = n * 10 + (*str++ - '0');
	if(neg == -1)
		return (-n);
	else
		return (n);
}
