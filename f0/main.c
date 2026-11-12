#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int ano = 0;
    printf("inserir ano:\n");
    scanf("%d",&ano);

    if(ano%4==0 && ano%100!=0 || ano%400==0)
    {
        printf("O ano %d é bisexto\n",ano);
    }
    else//se
    {
        printf("O ano %d não é bisexto\n",ano);
    }

    return 0;
}
