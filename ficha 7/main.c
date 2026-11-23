#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#include "cubo.h"

#define MAX 100

/*
#define FILEMODE_r "r"
#define FILEMODE_w 'w'
#define FILEMODE_a "a"

#define FILEMODE_rU "r+"
#define FILEMODE_wU "w+"
#define FILEMODE_aU "a+"

BINARIO
    "rb"
    "wb"
    "ab" 
*
*/

int ex1()
{
    char filename[10] = "ex1.txt";
    char escrever[MAX];

    FILE* file = fopen(filename, "a");
    
    if (file == NULL)
    {
        printf("Erro ao criar o ficheiro!\n");
        return 1;
    }

    while (1)
    {
        printf("STRING - para sair escrever '.' \n");
        fgets(escrever,sizeof(escrever),stdin);
        if(strcmp(escrever,".\n") == 0)
        {
            break; 
        }
        else
        {
            fputs(escrever,file);
        }
    }
    fclose(file);
}

void ex2(char *filename)
{
    char reader[MAX];
    FILE* file = fopen(filename, "r");
    while (fgets(reader,MAX,file) != NULL)
    {
        printf("%s", reader);
    }
}

void ex3()
{
    int tamanho;
    char filename[MAX];
    printf("Nome do ficheiro: ");
    scanf("%99s", filename);
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Erro ao abrir o ficheiro!\n");
        return;
    }
    fseek(file, 0, SEEK_END);
    tamanho = ftell(file);
    printf("Tamanho do ficheiro: %d bytes\n", tamanho);
    fclose(file);
}

void ex4()
{
    int cubo_num = 0, expo = 0;
    int numero = leitura();
    char filename[] = "cubo.txt";
    FILE *file = fopen(filename,"w");
    fprintf(file,"Cubo de %d = %d\n", numero, cubo(numero));
    printf("Exponeciar:\n");
    scanf("%d",&expo);
    fprintf(file,"%d exponenciado a %d = %d\n",numero, expo, exponenciacao(numero, expo));
    fclose(file);
    ex2(filename);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    char filename[10] = "ex1.txt";
    ex1();
    printf("\n");
    ex2(filename);
    printf("\n");
    ex3();
    printf("\n");
    ex4();
}

/*
if(escrever != ".")
        {
            fputs(escrever,file);
        }
        else
        {
            fclose(file);
            exit=1;
        }
*/

    //criarFile(filename);
    //ex1();

        //filename = (char *) malloc(sizeof(char));
    //printf("Qual o Nome do Ficheiro a criar? para sair escrever '.' \n");
    //scanf("%s",&filename);