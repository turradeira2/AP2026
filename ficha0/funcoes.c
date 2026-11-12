#include <stdio.h>
#include <stdlib.h>

float exponeciacao(float baseF, int expoenteF)
{
    int i=0;
    float resultado=1.0;
    for(i=0;expoenteF; i++)
    {
        resultado = resultado * baseF;
    }
    return resultado;
}