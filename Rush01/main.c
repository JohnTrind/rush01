#include <unistd.h>

int    ft_grid();

int	main(int argc, char *argv[])
{
    int i = 0;
    //write(1,argv[1],50);
	ft_grid(argc, argv[1]);
	return (0);
}