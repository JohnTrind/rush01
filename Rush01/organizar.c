#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    put_char(char c);
void	put_str(char *str);
int error();

void	print(int i)
{
	char	p;

	p = i + '0';
	write(1, &p, 1);
}

void	writetable(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			print(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		print(matrix[i][j]);
		write(1, "\n", 1);
		i++;
	}
}

int	*ft_cpycol(int mtx[4][4], int cnb)
{
	int	*col;
	int	i;

	col = malloc(4);
	i = 0;
	while (i < 4)
	{
		col[i] = mtx[i][cnb];
		i++;
	}
	return (col);
}


int	*ft_rev(int arr[4])
{
	int	*iarr;
	int	i;
	int	j;

	iarr = malloc(4);
	i = 0;
	j = 3;
	while (i < j)
	{
		iarr[i] = arr[j];
		iarr[j] = arr[i];
		i++;
		j--;
	}
	return (iarr);
}

int	check_seq(int *arr, int a)
{
	int	i;
	int	start;
	int	c;

	i = 1;
	c = 1;
	start = 0;
	while (start < 3 && *arr != 4)
	{
		if (*arr < *(arr + i))
		{
			arr = arr + i;
			i = 1;
			c++;
		}
		else
			i++;
		start++;
	}
	if (c != a)
		return (0);
	return (1);
}

int	check_line(int a, int b, int *line)
{
	int	*inv_line;

	if (check_seq(line, a) == 0)
		return (0);
	inv_line = ft_rev(line);
	if (check_seq(inv_line, b) == 0)
	{
		free(inv_line);
		return (0);
	}
	free(inv_line);
	return (1);
}

int	ft_check_matrix(int mtx[4][4], int inteiros[16])
{
	int	i;
	int	j;
	int	*col;

	i = 8;
	while (i < 12)
	{
		j = i + 4;
		if (check_line(inteiros[i], inteiros[j], mtx[i - 8]) == 0)
            error();
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = i + 4;
		col = ft_cpycol(mtx, i);
		if (check_line(inteiros[i], inteiros[j], col) == 0)
		{
			free(col);
            error();
			return (0);
		}
		free(col);
		i++;
	}
	return (1);
}

int  organizar(int *topo, int *base , int *esquerda, int *direita , int *inteiros)
{
    int linha[4][4];

    int c = 0;
    int t = 0;

    // while (c<4)
    // {
    //     while (t<4)
    //     {
    //         linha[c][t] = 0;
    //         t++;
    //     }
    //     t=0;
    //     c++;
    // }

     int i = 0;

    // while(i <4)
    // {
    //     if(topo[i]==1)
    //     linha[0][i]=4;

    //     if(topo[i]==4)
    //     {
    //         linha[0][i]=1;
    //         linha[1][i]=2;
    //         linha[2][i]=3;
    //         linha[3][i]=4;
    //     }
    //     i++;
    // }
    // i=0;
    // while(i <4)
    // {
    //     if(base[i]==1)
    //     linha[3][i]=4;

    //     if(base[i]==4)
    //     {
    //         linha[3][i]=1;
    //         linha[2][i]=2;
    //         linha[1][i]=3;
    //         linha[0][i]=4;
    //     }
    //     i++;
    // }
    // i=0;
    // while(i <4)
    // {
    //     if(esquerda[i]==1)
    //     linha[i][0]=4;

    //     if(esquerda[i]==4)
    //     {
    //         //nao sei qual é a linha tinha que por algo tipo linha[t][i]
    //         linha[i][0]=1;
    //         linha[i][1]=2;
    //         linha[i][2]=3;
    //         linha[i][3]=4;
    //     }
    //     i++;
    // }
    // i=0;
    // while(i <4)
    // {
    //     if(direita[i]==1)
    //     linha[i][3]=4;

    //     if(direita[i]==4)
    //     {
    //         linha[i][3]=1;
    //         linha[i][2]=2;
    //         linha[i][1]=3;
    //         linha[i][0]=4;
    //     }
    //     i++;
    // }
    i=0;
    
   //________ 1 e 4 ja na tabela agr os restantes em que n pode haver 4 nem 1 na mesma linha ou
   // coluna dos que ja estao colocados

    c = 0;
    t = 0;
    // ver todas as possibilidades

	int j, k, e;
	int allpossibil[24][4];
    int arr[4] = {1, 2, 3, 4};
	int line;
	line = 0;
	i = 0;
	while (i < 4)
    {
		j = 0;
        while (j < 4)
        {
			k = 0;
            while (k < 4)
            {
				e = 0;
				while (e < 4)
				{
                if (i != j && j != k && k != i && e != i && e != j && e != k)
                {
                    printf("%d %d %d %d\n", arr[i], arr[j], arr[k], arr[e]);
					allpossibil[line][0] = arr[i];
					allpossibil[line][1] = arr[j];
					allpossibil[line][2] = arr[k];
					allpossibil[line][3] = arr[e];
					line++;
                }
				e++;
				}
            k++;
		    	}
			j++;
        }
		i++;
    }



    int final[4][4];

    while (i < 24)
    {
		j = 0;
        while (j < 24)
        {
			k = 0;
            while (k < 24)
            {
				e = 0;
				while (e < 24)
				{
                if (i != j && j != k && k != i && e != i && e != j && e != k)
                {	
					c = 0;
					while (c < 4)
					{
						final[0][c] = allpossibil[i][c];
						final[1][c] = allpossibil[j][c];
						final[2][c] = allpossibil[k][c];
						final[3][c] = allpossibil[e][c];
						c++;
					}
					if (ft_check_matrix(final, inteiros) == 1)
					{
						printf("OK FUCKING YESSSSSS!\n");
					writetable(final);
					return (0);
					}
				
				}
				e++;
				}
            k++;
			}
			j++;
        }
		i++;
    }

    

    //------- imprimir a tablea
    // c = 0;
    // t = 0;
    // while (c<4)
    // {
    //     while (t<4)
    //     {
    //         printf("%d ",linha[c][t]);
    //         t++;
    //     }
    //     printf("\n");
    //     t=0;
    //     c++;
    // }
      return(0);
}

