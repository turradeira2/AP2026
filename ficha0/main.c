#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "funcoes.c"

int main()
{
    setlocale(LC_ALL,"portuguese");
    //printf("Olá a tod@s!\n");

    int idade;
    idade = 0;

    char apelido[20] = "";

    float x;
    float calRes = 0.0;

    /*
    x = 0.0;

    printf("Qual a sua idade? ");
    scanf("%d",&idade);

    printf("Qual o seu apelido? ");
    scanf("%s", apelido);

    printf("\nA pessoa tem %d anos e o seu apelido é: %s!",idade, apelido);
    
    */

    idade = 13;
    x = idade * 1.0 / 3;
    printf("O valor de x é %f.",x);
    
    calRes = exponeciacao(idade,x);

    printf("\nRES: %f \n", calRes);

    printf("\n\n");
    

    return 0;
}
