#include <stdio.h>
#include <stdlib.h>

//int	error(void);
//int	checktable(char *str);
//int	*cpyarr(char *str);
void	writetable(int matrix[4][4]);
int	check_line(int a, int b, int *line);
int	ft_check_matrix(int mtx[4][4], int table[16]);
/*int	main(int argc, char **argv)
{
	int	*table;

	if (argc != 2)
		return (error());
	if (checktable(argv[1]) != 16)
		return (error());
	table = cpyarr(argv[1]);
	printf("%d\n", table[1]);
	free(table);
	return (0);
}
*/
int	main(void)
{
	/*int matrix[4][4] = {
		{2, 3, 4, 1},
		{1, 4, 3, 2},
		{4, 2, 1, 3},
		{3, 1, 2, 4}};
*/
	//int table[16] = {3, 2,1,2,1,2,3,2,2,2,4,1,2,2,1,4};
	int a = ft_check_matrix(matrix, table);
	printf("%d\n", a);
	return 0;
}
