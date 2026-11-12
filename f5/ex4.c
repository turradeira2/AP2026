#include <stdio.h>
#include <stdlib.h>

#include "ex4.h"
#include "common.h"

void leVetor(int *v,int n)
{
    //printf("\e[1;1H\e[2J");
    int i;
    for(i=0;i<n; i++)
    {
        printf("VALOR DE POSIÇÃO %d:\n",i);
        scanf("%d",v + i);
    }
}

void mostraVetor(int *v,int n)
{
    //printf("\e[1;1H\e[2J");
    int i;
    for(i=0;i<n; i++)
    {
        printf("VALOR DE POSIÇÃO %d : %d\n\n",i,*(v+i));
    }
}

void mostraVetorInv(int *v,int n)
{
    //printf("\e[1;1H\e[2J");
    int i;
    for(i=n-1;i>=0; i--)
    {
        printf("VALOR DE POSIÇÃO %d : %d\n\n", i, *(v+i));
    }
}

int maxVetor(int *v,int n, int max)
{
    //printf("\e[1;1H\e[2J");
    int i;
    max = *v;
    for(i=1;i<n; i++)
    {
        if(max < *(v+i))
        {
            max = *v+i;
        }
    }
    return max;
}

int minVetor(int *v,int n, int min)
{
    //printf("\e[1;1H\e[2J");
    int i;
    min = *v;
    for(i=1;i<n; i++)
    {
        if(min > *(v+i))
        {
            min = *(v+i);
        }
    }
    return min;
}

int somaVetor(int *v, int n,int soma)
{
    //printf("\e[1;1H\e[2J");
    int i=0;
    for(i=0;i<n; i++)
    {
        soma += *(v+i);
    }
    return soma;
}

float mediaVetor(int *v, int n)
{
    //printf("\e[1;1H\e[2J");
    int i=0;
    int soma=0;
    float med;
    for(i=0;i<n; i++)
    {
        soma += *(v+i);
    }
    med = (soma*1.0) / (n*1.0);
    return med;
}