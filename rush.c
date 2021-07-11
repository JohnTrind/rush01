/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:23:42 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/07/11 11:34:13 by salegre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
     
#include <stdio.h>

int	ft_check_matrix(int mtx[4][4], int table[16]);
void	writetable(int matrix[4][4]);


int main1()
{
    int i, j, k, e;
	int bigmama[24][4];
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
                    printf("[%d %d %d %d]\n", arr[i], arr[j], arr[k], arr[e]);
					bigmama[line][0] = arr[i];
					bigmama[line][1] = arr[j];
					bigmama[line][2] = arr[k];
					bigmama[line][3] = arr[e];
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
	
	i = 0;
	j = 0;
	k = 0;
	e = 0;
	int c;
//	int p;
//	long int counter;

	int baby[4][4];
	int table[16] = {3, 2,1,2,1,2,3,2,2,2,4,1,2,2,1,4};

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
						baby[0][c] = bigmama[i][c];
						baby[1][c] = bigmama[j][c];
						baby[2][c] = bigmama[k][c];
						baby[3][c] = bigmama[e][c];
						c++;
					}
					if (ft_check_matrix(baby, table) == 1)
					{
						printf("OK FUCKING YESSSSSS!\n");
					writetable(baby);
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
//printf("\n %ld \n ", counter);
return(0);
}
