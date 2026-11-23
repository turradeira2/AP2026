#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "ficheiros.h"

#define MAX 50

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
void ex1()
{
    char filename[10] = "ex1.txt";
    char escrever[MAX];
    int exit = 0;
    //filename = (char *) malloc(sizeof(char));
    printf("Qual o Nome do Ficheiro a criar? para sair escrever '.' \n");
    //scanf("%s",&filename);
    FILE* file = fopen(filename, "a");
    do
    {
        printf("STRING - para sair escrever '.' \n");
        fgets(escrever,sizeof(escrever),stdin);
        fputs(escrever,file);
        if(escrever != ".")
        {
            fputs(escrever,file);
        }
        else
        {
            fclose(file);
            exit=1;
        }
    }
    while (exit = 0);
    //criarFile(filename);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    char filename[10] = "ex1.txt";
    char escrever[MAX];
    int exit = 0;
    //filename = (char *) malloc(sizeof(char));
    printf("Qual o Nome do Ficheiro a criar? para sair escrever '.' \n");
    //scanf("%s",&filename);
    FILE* file = fopen(filename, "a");
    do
    {
        printf("STRING - para sair escrever '.' \n");
        fgets(escrever,sizeof(escrever),stdin);
        //fputs(escrever,file);
        if(escrever[0] == ".")
        {
            fclose(file);
            exit=1;
            
        }
        else
        {
            fputs(escrever,file);
        }
    }
    while (exit == 0);
    //criarFile(filename);
    //ex1();
    
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