typedef struct partido
{
    char nome[51];
    int votos;
    int lugares;
    /* data */
} Partidos;

Partidos allocPartidos();
void lePartidos();
void calcLugares();
