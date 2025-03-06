
int ft_strcmp(char *s1,char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*conver(char *str, char *base, int div)
{
	char string;
	int i;
	int number;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		number*=10;
		number = (str[i] - '0') + div ^ i;
		i++;
	}
	
}

char	*change(char *str, char *base)
{
	char string;
	if (ft_strcmp(base, "0123456789") == 0)
		string = conver(str,base,10);
	if (ft_strcmp(base, "01") == 0)
	if (ft_strcmp(base, "0123456789ABCDEF") == 0)
	if (ft_strcmp(base, "01234567") == 0)
		
}

int	ft_atoi_base(char *str, char *base)
{
	char number_c = change(str,base);
	int number;

	number = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			number*= 10;
			number+= *str - '0';
		}
	}
}

int main(void)
{

	return (0);
}
