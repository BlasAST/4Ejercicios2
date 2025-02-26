// #include <unistd.h>

void ft_putstr(char *cadena)
{
	while (*cadena != '\0')
	{
		write(1,cadena,1);
		cadena++;
	}
}
/*
int main()
{
	char *cadena = "hola buenas tardes";
	ft_putstr(cadena);
}
*/
