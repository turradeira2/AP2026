#include <stdio.h>
#include "ponteiros.h"

/*
*TODO : ESTRUTURA DE MATRIZ
*/

void leMatriz(int **m, int nL,int nC)
{
    int i,j;
    for (i = 0; i < nL ; i++)
    {
        for (j = i+1; j < nC; j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
            
        }
    }

}

void escreveMatriz()
{}

void tracoMatriz(int *M,int N)
{
    //elementos M(i,i) -> M[i*nC+j] || *(M+i*nc+j) 
}

int simetria( int *m, int nL,int nC)
{
    int i,j;
    for (i = 0; i <= nL - 2; i++)
    {
        for (j = i+1; j <= nC; j++)
        {
            if (*(m + i*nC+j) != *(m + j*nC+i))
            {
                return 0;
            }
        }
    }
    return 1;
}

void multMatriz();