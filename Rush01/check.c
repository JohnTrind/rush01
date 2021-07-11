#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	put_str(char *str);
void    put_char(char c);
void    organizar(int *topo, int *base , int *esquerda, int *direita);

void check(int **linha , int *topo, int *base , int *esquerda, int *direita )
{
    int i = 0;
    int check = 1;

    while(i<4)
    {
        if(topo[i] == 1 && linha[1][i] == 4)
        {
            check = 1;
        }
        if(topo[i] == 4 && linha[4][i] == 4 && linha[3][i] == 3 && linha[2][i] == 2 && linha[1][i] == 1)
        {
            check = 1;
        }
    }
}