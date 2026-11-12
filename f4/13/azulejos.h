#define MAX_AZ1 100
#define MAX_AZ2 200

typedef struct azulejo {
    float comp;
    float larg;
    int nCores;
} AZULEJO;

void initParede(AZULEJO parede[MAX_AZ1][MAX_AZ2]);
void newParede(AZULEJO parede[MAX_AZ1][MAX_AZ2]);
float areaparede(AZULEJO parede[MAX_AZ1][MAX_AZ2]);