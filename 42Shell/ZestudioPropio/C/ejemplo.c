

//Haz un programa que reciba parametros

#include <stdio.h>
#include <unistd.h>
int main(int args, char **argv)
{
	int i = 0;
	if (args != 1 )
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'r')
			{
				write(1,"r",1);
				return (0);
			}
			i++;
		}
		write(1,"r",1);


	}
	else
		write (1, "r", 1);
	return(0);
}
