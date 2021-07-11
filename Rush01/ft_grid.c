#include <unistd.h>
#include <stdio.h>
void put_char(int c);
void	put_str(char *str);
int error();
void converterint(char *values);

int ft_grid(int counts, char *values)
{
    int i = 0;
    int spaces = 0;
    int um = 0; 
    int dois = 0;
    int tres = 0;
    int quatro = 0;
    int numeros = 0;
    char *values2 = values;
    while(*values)
    {
        if (*values != ' ' && *values != '1' && *values != '2'
		&& *values != '3' && *values != '4')
		{
			error();
            return (0);
		}
        //put_char(*values);
        i++;
        values++;
        if(*values == ' ')
        spaces++;
        else
        numeros++;
        if(*values == '1')
        um++;
        else if(*values == '2')
        dois++;
        else if(*values == '3')
        tres++;
        else if(*values == '4')
        quatro++;
    }

    if(i!=31 || spaces!=15 || numeros !=16)
    {
        error();
        return(0);
    }
    if(um > 4 || dois > 8 || tres > 8 || quatro > 4)
    {
        error();
        return(0);
    }
    
    converterint(values2);

    printf("numeros %d\n" , numeros);
    printf("um %d\n",um);
    printf("dois %d\n",dois);
    printf("tres %d\n",tres);
    printf("quatro %d\n",quatro);
    printf("espacos %d\n",spaces);
    printf("total %d",i);
    put_char('\n');
    return(0);
}