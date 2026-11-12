#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exercicio4()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Insira 1º numero\n");
    scanf("%d",&num1);
    printf("Insira 2º numero\n");
    scanf("%d",&num2);
    printf("Insira 3º numero\n");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("O maior numero é %d\n",num1);
        }
        else if(num1<num3)
        {
            printf("O maior numero é %d\n",num3);
        }
    }
    else if(num1<num2)
    {
        if(num2>num3)
        {
            printf("O maior numero é %d\n",num2);
        }
        else if(num2<num3)
        {
            printf("O maior numero é %d\n",num3);
        }
    }
    //printf("\n\n");
    return 0;
}

int exercicio5()
{
    int num1 = 0;
    printf("Insira numero:\n");
    scanf("%d",&num1);
    if(num1%2==0)
    {
        printf("%d é numero Par\n",num1);
    }
    else
    {
        printf("%d é numero Impar\n",num1);
    }
}

int exercicio6()
{
    int unidades = 0;
    
    float precoUnit = 0.0;
    float saldo = 0.0;
    float total = 0.0;
    float troco = 0.0;
    printf("Insira Preço Unitário:\n");
    scanf("%f",&precoUnit);
    
    printf("Insira Saldo:\n");
    scanf("%f",&saldo);
    
    unidades =(int)(saldo/precoUnit);
    total = unidades*precoUnit;
    troco = saldo - total;

    printf("Pode comprar %d unidades e vai ter %.2f€ de troco.\n",unidades, troco);
}

int exercicio9()
{
    int a = 0;
    int b = 0;

    printf("Insira 2 numeros:\n");
    scanf("%d%d",&a, &b);

    if(a%b == 0)
    {
        printf("%d é multiplo de %d\n",a,b);
    }
    else if(b%a == 0)
    {
        printf("%d é multiplo de %d\n",b,a);
    }
    else
    {
        printf("%d e %d não são multiplos.\n",a,b);
    }
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    //exercicio 16
    int dia,mes,ano, diasFaltam = 0;
    printf("inserir data separada por espaços:\n");
    scanf("%d%d%d",&dia,&mes,&ano);
    if(((ano%4==0) && (ano%100!=0) )|| (ano%400==0))//se
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 7:
        case 8:
        case 10:
        case 12:
            diasFaltam=31-dia;
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            diasFaltam=30-dia;
            break;

        case 2:
            diasFaltam = 29 -dia;
            break;
        
        default:
            printf("MÊS INVALIDO!\n");
            diasFaltam=-1;
            break;
        }
    }
    else//se
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 7:
        case 8:
        case 10:
        case 12:
            diasFaltam = 31 - dia;
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            diasFaltam = 30 - dia;
            break;

        case 2:
            diasFaltam = 28 - dia;
            break;
        
        default:
            printf("MÊS INVALIDO!\n");
            diasFaltam=-1;
            break;
        }
    }
    if(diasFaltam>=0)
    {
        printf("Faltam %d dias.\n",diasFaltam);
    }
    
    //printf("\n\n");
    return 0;
}

/*exercicio 12

    int ano = 0;//variavel ano int
    printf("inserir ano:\n");
    scanf("%d",&ano);//ler ano

    if( ( (ano%4==0) && (ano%100!=0) )|| (ano%400==0))//se
    {
        printf("O ano %d é bisexto\n",ano);
    }
    else//se
    {
        printf("O ano %d é comum\n",ano);
    }

12/01
dd/mm/aaaa

f-28
j m m j a o d- 31
a j s n



exercicio13
int minutos = 0,horas = 0, minutosTotal = 0, dias=0;
    printf("inserir minutos desde meia-noite:\n");
    scanf("%d",&minutosTotal);
    dias = minutosTotal/1440;
    horas = (minutosTotal-(dias*1440))/60;
    minutos = minutosTotal%60;
    
    //printf("%d horas e %d minutos\n",horas,minutos);
    
    if(horas<12)
    {
        printf("%d dias, %d horas e %d minutos AM\n",dias,horas,minutos);
    }
    else if (horas == 12)
    {
        printf("%d dias, %d horas e %d minutos PM\n",dias,horas,minutos);
    }
    else
    {
        printf("%d dias, %d horas e %d minutos PM\n",dias,horas-12,minutos);
    }
 */