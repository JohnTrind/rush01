#include <unistd.h>

void put_char(int c)
{
    write(1,&c,1);
}

void	put_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
}