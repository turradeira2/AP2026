#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "common.h"
#include "ex4.h"

int main()
{
    printf("\e[1;1H\e[2J");
    setlocale(LC_ALL,"portuguese");

    int v[MAX];
    int n = 0;
    int max = 0;
    int min = 0;
    int soma = 0;
    float med;

    printf("VALOR DE N:\n");
    scanf("%d",&n);

    leVetor(v,n);
    getchar();

    mostraVetor(v,n);
    getchar();

    mostraVetorInv(v,n);
    getchar();

    maxVetor(v,n,max);
    getchar();

    minVetor(v,n,min);
    getchar();

    somaVetor(v, n, soma);
    getchar();

    med = mediaVetor(v,n);
}

/*ex1
int main()
{
   int n1,n2;
    printf("INTRODUZA 2 VALORES INTEIROS:\n");
    scanf("%d%d",&n1,&n2);
    
    trocaMal(n1,n2);
    printf("output trocaMal: %d %d \n",n1,n2);

    //trocaBem(n1,n2);
    //printf(""); 
}


int trocaMal(int n1,int n2)
{
    int aux;
    aux = n1;
    n1=n2;
    n2 = aux;
    return n1,n2;
}
*/