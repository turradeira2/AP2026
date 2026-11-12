#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//colors
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//background colors
#define ANSI_COLOR_BLACK_BG   "\x1b[40m"
#define ANSI_COLOR_RED_BG     "\x1b[41m"
#define ANSI_COLOR_GREEN_BG   "\x1b[42m"
#define ANSI_COLOR_YELLOW_BG  "\x1b[43m"
#define ANSI_COLOR_BLUE_BG    "\x1b[44m"
#define ANSI_COLOR_MAGENTA_BG "\x1b[45m"
#define ANSI_COLOR_CYAN_BG    "\x1b[46m"
#define ANSI_COLOR_WHITE_BG   "\x1b[47m" // Light gray

void ex1()
{
    int num = 0, multiplo = 0;
    do
    {
        printf("Inserir numero inteiro maior que zero:\n");
        scanf("%d",&num);
        if(num<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(num<=0);
    printf("Multiplos de %d:\n",num);
    multiplo = num;
    for(multiplo=num; multiplo < 100; multiplo+=num)
    {
        printf("%d \n",multiplo);
    }
    /*
    while(multiplo <100)
    {

        multiplo = multiplo + num;
    }
    */
}

void ex3()
{
    int num = 0;
    do
    {
        printf("Inserir numero inteiro maior que zero e menor que nove:\n");
        scanf("%d",&num);
        if(num < 0 || num>9)
        {
            printf("ERRO: NUMERO É MENOR QUE ZERO OU MAIOR QUE NOVE!\n");
        }
    }
    while(num < 0 || num > 9);
    printf("Numero Inserido %d:\n",num);
}

void ex4()
{
    int num = 0, par = 0, impar = 0;
    do
    {
        printf("Inserir numero inteiro maior que zero (numero negativo para sair):\n");
        scanf("%d",&num);
        system("clear");
        if(num >= 0)
        {
            if(num%2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
        printf("Inseriu %d numeros pares e %d numeros impares.\n\n",par,impar);
    }
    while(num >= 0 );
    //printf("Numero Inserido %d:\n",num);
}

void ex5()
{
    int n = 0, m = 0;
    system("clear");
    do
    {
        printf("Inserir o numero de multiplos a mostrar (inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
        else
        {
            printf("Inserir o numero para determinar multiplos (inteiro maior que 0):\n");
            scanf("%d",&m);
            if(n<=0)
            {
                printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
            }
        }
    }
    while(n <= 0 );
    printf("\n");
    //system("clear");
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",m*i);
    }
}

void ex6()
{
    int n = 0, m = 0;
    system("clear");
    do
    {
        printf("Inserir o numero de somas a mostrar (inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(n <= 0 );
    printf("\n");
    //system("clear");
    for(int i=1; i<=n; i++)
    {
        printf("%d + %d = %2d\n",m,i,m+i);
        m+=i;
    }
}

void ex7()
{
    int n=0;
    printf("Inserir o numero a mostrar tabuada (inteiro):\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %2d = %2d\n",n,i,n*i);
    }
}

void ex8()
{
    int n=2;
    //printf("A mostrar tabuada de %d:\n");
    //scanf("%d",&n);
    for(n=2;n<=10; n++)
    {
        printf("A mostrar tabuada de %d:\n",n);
        for(int i=1; i<=10; i++)
        {
            printf("%d x %2d = %2d\n",n,i,n*i);
        }
        printf("\n Prima uma tecla para continuar...\n");

        system("pause");
    }
}

void ex9()
{
    int n = 0, m = 0;
    system("clear");
    do
    {
        printf("Inserir o numero para mostar divisores(inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(n <= 0 );

    printf("%d\n",n);
    for(int i=n/2; i>=1; i--)
    {
        if(n%i == 0)
        {
            printf("%d\n",i);
        }

    }
}

void ex10()
{
    int n = 0, m = 0, i;
    system("clear");
    do
    {
        printf("Inserir o numero para mostar divisores(inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(n <= 0 );
    system("clear");
    printf("Divisores pares de %d:\n",n);
    while(m+i<n)
    {
        m+=i;
        i+=2;
    }
    printf("Soma de divisores pares de %d é %d\n",n,m);
}

void ex11()
{
    float n=8,som=1,div=0;
    int i, sinal = 0;
    printf("%f\n",n);
    printf("\n");
    printf("1\n");
    for(i=2;i<=n;i+=2)
    {
        printf("%d\n",i);
        if(sinal==0)
        {
            som -= som/i;
        }
        else if(sinal==1)
        {
            som += som/i;
        }
        sinal=-sinal;
        printf("1/%d\n",i);
        printf("\n");
        printf("%f\n",som);
    }
}

void ex15()
{
    int n = 0, i,j;
    system("clear");
    do
    {
        printf("Inserir o numero para mostar divisores(inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf(ANSI_COLOR_RED"ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(n <= 0 );

    //printf("%d\n",n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(ANSI_COLOR_GREEN "*");
        }
        printf(ANSI_COLOR_RESET"\n");
    }
}

void ex16()
{
    int n = 0, i=0,j=0,espacos=0;
    int dec;
    system("clear");
    do
    {
        printf("Inserir o numero para mostar divisores(inteiro maior que 0):\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("ERRO:\n NUMERO É MENOR OU IGUAL A ZERO!\n");
        }
    }
    while(n <= 0 );

    //printf("%d\n",n);

    for(i=1;i<=n;i++)
    {
        espacos=n-i;
        for(j=1;j<=espacos;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        //dec = i;
        for(j=i-1;j>0;j--)
        {
            printf("%d",j);
        }

        for (j=1;j<=espacos;j++ )
        {
            printf(" ");
        }

        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    //ex1();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    //ex7();
    //ex8();
    //ex9();
    //ex10();
    //ex11();
    //ex16();

    return 0;
}
/*
void title_screen()
{
	printf("\n");
	printf(ANSI_COLOR_RED     " #####    ####    ####   #    #  ######          ####   #        ####   #    #  ######\n");
	printf(ANSI_COLOR_GREEN   " #    #  #    #  #       #    #  #              #    #  #       #    #  ##   #  #     \n");
	printf(ANSI_COLOR_YELLOW  " #    #  #    #  #       #    #  #              #       #       #    #  # #  #  #     \n");
	printf(ANSI_COLOR_BLUE    " #####   #    #  #  ###  #    #  ####     ###   #       #       #    #  #  # #  ####  \n");
	printf(ANSI_COLOR_MAGENTA " #    #  #    #  #    #  #    #  #              #    #  #       #    #  #   ##  #     \n");
	printf(ANSI_COLOR_CYAN    " #    #   ####    ####    ####   ######          ####   ######   ####   #    #  ######\n");
	printf("\n");
	printf("\n");
	printf("             BY TIAGO MATOS WITH SOME HELP FROM ALEXANDRE CARDOSO\n");
	printf(ANSI_COLOR_RESET);
	printf("Press Any Key to Continue\n");
	getchar();
	printf("\n");
}
*/
