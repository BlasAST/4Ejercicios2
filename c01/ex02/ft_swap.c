#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	char n = *a + '0';
	write (1,&n,1);
}

/*
int main(void)
{
	int  a = 0;
	int b = 5;
	ft_swap(&a,&b);
}*/
