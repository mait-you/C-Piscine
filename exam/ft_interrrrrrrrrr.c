#include <stdio.h>

int c_d(char *str, char c, int p)
{
	int i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int ac, char *av[])
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[1][j])
				{
					if (c_d(av[1], av[1][i], i) == 1)
					{
						printf("%c", av[1][i]);
						break ;
					}
				}
				j++;
			}
			i++;
		}
	}
}
