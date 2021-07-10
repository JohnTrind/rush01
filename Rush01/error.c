#include <unistd.h>

void	put_str(char *str);

int error()
{
    put_str("Error\n");
	return (0);
}