#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return i;
}
int main ()
{
	char a = ft_strlen("Una luna") + '0';
	write (1, &a, 1);
}
