#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i=1,b;
    float a,res=1;
    printf("inserir a:\n");
    scanf("%f",&a);
    printf("inserir b:\n");
    scanf("%d",&b);

    while(i<=b)
    {
        res=res*a;
        i++;
    }
    printf("%f\n\n",res);

    res=1;

    for(i=1;i<=b;i++)
    {
        res=res*a;
    }
    printf("%f\n",res);
    return 0;
}


/*
 * ex12
 *
    int i,j, sinal=1;
    float n=8,num=1,den=1, som=1;

    for(i=2;i<=n;i++)
    {
        den=den*2;
        som=som+sinal*i*1.0/den;
        printf("%f\n\n\n",som);
    }
 */
