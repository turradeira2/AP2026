#include "azulejos.h"

#include <stdio.h>

void initParede(AZULEJO parede[MAX_AZ1][MAX_AZ2])
{
    int i,j;
    for(i=0;i<MAX_AZ1;i++)
    {
        for (j = 0; j < MAX_AZ2; j++)
        {
            parede[i][j].comp = 0.0;
            parede[i][j].larg = 0.0;
            parede[i][j].nCores = 0;
        }   
    }
}

void newParede(AZULEJO parede[MAX_AZ1][MAX_AZ2])
{
    int i,j,valid_comp = 0,valid_larg = 0;
    float new_comp,new_larg;
    for(i=0;i<MAX_AZ1;i++)
    {
        for (j = 0; j < MAX_AZ2; j++)
        {
            if (parede[i][j].comp == 0.0 || parede[i][j].larg == 0.0)
            {
                do
                {
                    printf("Inserir comprimento de parede em metros:\n");
                    scanf("%f",&new_comp);
                    if (new_comp<=0.0)
                    {
                        printf("ERRO: COMPRIMENTO INVALIDO!\n");
                        valid_comp = 0;
                    }
                    else
                    {
                        parede[i][j].comp = new_comp;
                        valid_comp = 1;
                    }
                } while (valid_comp = 0.0);
                printf("%f\n",&parede[i][j].comp);

                do
                {
                    printf("Inserir largura de parede em metros:\n");
                    scanf("%f",new_larg);
                    if (new_comp<=0)
                    {
                        parede[i][j].larg = new_larg;
                        valid_larg = 1;
                    }
                    else
                    {
                        printf("ERRO: LARGURA INVALIDA!\n");
                    }
                } while (valid_larg = 0);
                printf("%f\n",parede[i][j].larg);

                //return;
            }
        }  
    }
}

float areaparede(AZULEJO parede[MAX_AZ1][MAX_AZ2])
{
    int i,j;
    float area = 0.0;
    for(i=0;i<MAX_AZ1;i++)
    {
        for (j = 0; j < MAX_AZ2; j++)
        {
            if (parede[i][j].comp != 0.0 || parede[i][j].larg != 0.0)
            {
                area = parede[i][j].comp * parede[i][j].larg;
                printf("%f",area);
            }
        }   
    }
}