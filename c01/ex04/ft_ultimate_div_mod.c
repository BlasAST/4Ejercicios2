/*
#include <unistd.h>

void print_char(char n)
{
	write(1, &n, 1);
}
*/
void ft_ultimate_div_mod(int *a, int *b)
{
	int temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	//print_char(*a + '0');
	//print_char(*b + '0');
}
/*
int main(void)
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
} */
