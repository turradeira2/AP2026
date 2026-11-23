#include "ficheiros.h"

#include <stdio.h>

void criarFile(char* filename)
{
    FILE* file = fopen(filename, "w");
}

void abrirFile();
void lerFile();
void escreverFile();
void tamanhoFile();