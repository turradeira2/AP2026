#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "ponteiros.h"
#include "partidos.h"

int alocaMatriz(int nL, int nC)
{
    int *M =(int*)malloc(nL*nC*sizeof(int));
    if(M == NULL)
    {
        printf("ERRO NA ALOCAÇÃO DE MEMORIA!\n");
        exit(1);
    }
    return M;
}

void metodoHondt()
{
    Partidos *vetPartidos;
    int nPart=0, numMandatos = 0;
    
    printf("Qual o numero de Partidos?\n");
    scanf("%d",&nPart);
    allocPartidos(*vetPartidos,nPart);
    printf("Qual o numero de Mandatos?\n");
    scanf("%d",&numMandatos);

    for (int i = 0; i < nPart; i++)
    {
        printf("Partido %s recebe %d lugares\n",vetPartidos[i].nome, vetPartidos[i].lugares);
    }

}

int main()
{
    printf("\e[1;1H\e[2J");
    setlocale(LC_ALL,"portuguese");
    int menu;
    int nL,nC,n;
    // Metodo de Hondt
    int totalLugares;

    //int B =(int*)malloc(nL*nC*sizeof(int));
    //int *R;
    
    printf("\n");
    printf("+-------------- MATRIZES --------------+\n");
    printf("|                                      |\n");
    printf("| 1 - Traço Matriz                     |\n");
    printf("| 2 - Multiplicação de Matrizes        |\n");
    printf("|                                      |\n");
    printf("| 3 - Metodo de Hondt                  |\n");
    printf("|                                      |\n");
    printf("+--------------------------------------+\n");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
        printf("Linhas da Matriz: ");
        scanf("%d",&nL);
        printf("\n");
        printf("Colunas da Matriz: ");
        scanf("%d",&nC);
        printf("\n");
        int A = alocaMatriz(nL,nC);
        leMatriz(A,nL,nC);
        break;
    case 3:
        metodoHondt();
        break;


    default:
        break;
    }
}

//printf("| 1-Inserir Matriz             |\n");
    //printf("| 2-Mostrar Matriz             |\n");