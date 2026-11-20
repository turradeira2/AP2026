#include "partidos.h"

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

Partidos allocPartidos(Partidos *V,int nPart)
{
    V = (Partidos *) malloc(nPart*sizeof(Partidos));
    return *V;
}

void lePartidos(Partidos *L,int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Nome do Partido %d:\n",i+1);
        fseek(stdin,0,2);
        fgets(L->nome,51,stdin);
        printf("Quantos votos recebeu?\n");
        scanf("%d",L->votos);
        L->lugares = 0;
        L++;
    }
}

int posMaximo(int *q, Partidos *L, int n)
{
    int i, posMax=0;
    for ( i = 0; i < n; i++)
    {
        if(q[i] > q[posMax] || ((q[i]== q[posMax] && L[i].lugares < L[posMax].lugares)))
        {
            posMax=i;
        }
    }
    return posMax;    
}

void calcLugares(Partidos *L, int n,int nMand)
{
    int i,nAtrib,posproxPart;
    int *q = (int*)malloc(n * sizeof(int));
    nAtrib = 0;
    while (nAtrib < nMand)
    {
        for (i = 0; i < n; i++)
        {
            q[i] = L[i].votos / (1 + L[i].lugares);
        }
        posproxPart = posMaximo(q,L,n); //pos do 
        L[posproxPart].lugares++;
        nAtrib++;        
    }
    free(q);
}