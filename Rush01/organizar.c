#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    put_char(char c);
void	put_str(char *str);

void  organizar(int *topo, int *base , int *esquerda, int *direita)
{
    int linha[4][4];

    int c = 0;
    int t = 0;

    while (c<4)
    {
        while (t<4)
        {
            linha[c][t] = 0;
            t++;
        }
        t=0;
        c++;
    }

    int i = 0;

    while(i <4)
    {
        if(topo[i]==1)
        linha[0][i]=4;

        if(topo[i]==4)
        {
            linha[0][i]=1;
            linha[1][i]=2;
            linha[2][i]=3;
            linha[3][i]=4;
        }
        i++;
    }
    i=0;
    while(i <4)
    {
        if(base[i]==1)
        linha[3][i]=4;

        if(base[i]==4)
        {
            linha[3][i]=1;
            linha[2][i]=2;
            linha[1][i]=3;
            linha[0][i]=4;
        }
        i++;
    }
    i=0;
    while(i <4)
    {
        if(esquerda[i]==1)
        linha[i][0]=4;

        if(esquerda[i]==4)
        {
            //nao sei qual é a linha tinha que por algo tipo linha[t][i]
            linha[i][0]=1;
            linha[i][1]=2;
            linha[i][2]=3;
            linha[i][3]=4;
        }
        i++;
    }
    i=0;
    while(i <4)
    {
        if(direita[i]==1)
        linha[i][3]=4;

        if(direita[i]==4)
        {
            linha[i][3]=1;
            linha[i][2]=2;
            linha[i][1]=3;
            linha[i][0]=4;
        }
        i++;
    }
    i=0;
    
   //________ 1 e 4 ja na tabela agr os restantes

    // c = 0;
    // t = 0;
    // while (c<4)
    // {
    //     while (t<4)
    //     {
    //         if( linha[c][t] == 0)
    //         {
    //             linha[c][t] == 4;
    //         }
    //         t++;
    //     }
    //     printf("\n");
    //     t=0;
    //     c++;
    // }

    //------- imprimir a tablea
    c = 0;
    t = 0;
    while (c<4)
    {
        while (t<4)
        {
            printf("%d ",linha[c][t]);
            t++;
        }
        printf("\n");
        t=0;
        c++;
    }
      
}

