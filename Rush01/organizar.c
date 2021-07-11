#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    put_char(char c);
void	put_str(char *str);

void  organizar(int *topo, int *base , int *esquerda, int *direita)
{
    int **linha = (int**)malloc(4 * sizeof(int**));

    int i = 0;

    while(topo[i] != 0)
    {
        if(topo[i]=='1')
        linha[1][i]=4;

        if(topo[i]=='4')
        {
            linha[1][i]=1;
            linha[2][i]=2;
            linha[3][i]=3;
            linha[4][i]=4;
        }
        i++;
    }
    // i=0;
    // while(base[i] != 0)
    // {
    //     if(base[i]==1)
    //     linha[4][i]=4;

    //     if(base[i]==4)
    //     {
    //         linha[4][i]=1;
    //         linha[3][i]=2;
    //         linha[2][i]=3;
    //         linha[1][i]=4;
    //     }
    //     i++;
    // }
    // i=0;
    // while(esquerda[i] != 0)
    // {
    //     if(esquerda[i]==1)
    //     linha[i][1]=4;

    //     if(esquerda[i]==4)
    //     {
    //         //nao sei qual é a linha tinha que por algo tipo linha[t][i]
    //         linha[i][1]=1;
    //         linha[i][2]=2;
    //         linha[i][3]=3;
    //         linha[i][4]=4;
    //     }
    //     i++;
    // }
    // i=0;
    // while(direita[i] != 0)
    // {
    //     if(direita[i]==1)
    //     linha[i][4]=4;

    //     if(direita[i]==4)
    //     {
    //         linha[i][4]=1;
    //         linha[i][3]=2;
    //         linha[i][2]=3;
    //         linha[i][1]=4;
    //     }
    //     i++;
    // }
    // i=0;

    // int t = 0;
    // while (i!=4)
    // {
    //     while (t!=4)
    //     {
    //         put_char(linha[i][t]);
    //         t++;
    //     }
    //     t=0;
    //     i++;
    // }
      
}