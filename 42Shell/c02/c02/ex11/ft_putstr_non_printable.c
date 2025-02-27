#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}
void ft_print_hex(int n)
{
	ft_putchar('\\');
	if (n / 16 < 10)
		ft_putchar(n / 16 + '0');
	else
		ft_putchar(n / 16 - 10 + 'a');

	if (n % 16 < 10)
		ft_putchar(n % 16 + '0');
	else
		ft_putchar(n % 16 - 10 + 'a');
}
void	ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] >= 32 && str[i] <= 126)
			write(1,&(str[i]),1);
		else
		{
			ft_print_hex(str[i]);
		}
		i++;
	}
}

int main()
{

	char h[] = "holaComo \e estamos\n\t\n";
	ft_putstr_non_printable(h);
}
