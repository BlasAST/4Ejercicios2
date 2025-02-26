#include <unistd.h>
/*
void print_char(char n)
{
	write (1, &n, 1);
}
*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	//print_char (*div + '0');
	//print_char (*mod + '0');
}
/*
int main ()
{
	int a, b;
	a = 10;
	b = 2;
	int *div, *mod;
	ft_div_mod(a,b,div,mod);
}
*/
