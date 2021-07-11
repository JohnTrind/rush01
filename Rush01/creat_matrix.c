#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	put_str(char *str);
void    put_char(char c);
int  organizar(int *inteiros);

void converterint(char  *values)
{
    int i = 0;
    int t = 0;
    int b = 0;
    int e = 0;
    int d = 0;

    int *topo = (int*)malloc(4 * sizeof(int));
    int *base = (int*)malloc(4 * sizeof(int));
    int *esquerda = (int*)malloc(4 * sizeof(int));
    int *direita = (int*)malloc(4 * sizeof(int));
    int inteiros[16];

    while(*values != 0)
    {
        if(*values != ' ')
        {
            if(*values == 49)
             inteiros[i]=1;
             else if(*values == 50)
             inteiros[i]=2;
             else if(*values == 51)
              inteiros[i]=3;
             else if(*values == 52)
              inteiros[i]=4;

            i++;
        }
        values++;
    }
    t=0;

    organizar(inteiros);

    // while(inteiros[t] <=4)
    // {
    //     topo[t]=inteiros[t];
    //     t++;
    // }
    // while(inteiros[t] <=8)
    // {
    //     base[b]=inteiros[t];
    //     b++;
    // }
    // while(inteiros[t] <=12)
    // {
    //     esquerda[e]=inteiros[t];
    //     e++;
    // }
    // while(inteiros[t] <=16)
    // {
    //     direita[d]=inteiros[t];
    //     d++;
    // }


    // i=0;
    // while(i!=4)
    // {
    // printf("topo %d\n",topo[i]);
    // i++;
    // }
    // i=0;
    // while(i!=4)
    // {
    // printf("base %d\n",base[i]);
    // i++;
    // }
    // i=0;
    // while(i!=4)
    // {
    // printf("esquerda %d\n",esquerda[i]);
    // i++;
    // }
    // i=0;
    // while(i!=4)
    // {
    // printf("direita %d\n",direita[i]);
    // i++;
    // }
}