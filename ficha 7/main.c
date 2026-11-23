#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#include "ficheiros.h"

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
        //fputs(escrever,file);
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
    return 0;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    ex1();
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