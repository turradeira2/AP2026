#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "azulejos.h"

int main()
{
    setlocale(LC_ALL,"portuguese");

    int menu = 0;
    AZULEJO parede[MAX_AZ1][MAX_AZ2];
    initParede(parede);
    
    do
    {
        system("clear");
        printf("MENU\n\n1-Criar Parede\n2-Calcular Área\n");
        scanf("%d",&menu);
    
        switch (menu)
        {
            case 1:
                system("clear");
                newParede(parede);
                break;

            case 2:
                system("clear");
                areaparede(parede);
                break; 
    
            default:
                break;
        }
    } while (1);
}
    