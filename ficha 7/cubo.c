#include <stdio.h>

int leitura()
{
    int valor = 0;
    printf("Insira um número: \n");
    scanf("%d",&valor);
    return valor;
}

int cubo(int n)
{
    return n * n * n;
}

int exponenciacao(int x, int exp)
{
    int resultado = 1;

    for (int i = 0; i < exp; i++)
    {
        resultado *= x;
    }

    return resultado;
}

/* ============================================================
 * EXERCÍCIO 4 — Cubo e exponenciação
 * ============================================================
 * Caixa preta:
 *   int leitura();   // pede um inteiro
 *   int cubo(int n);                     // devolve n ao cubo
 *   int exponenciacao(int x, int exp);   // devolve x elevado a exp
 *
 * Simulação:
 *   leitura()  -> (pede-se número ao utilizador que escreve 3)       -> 3
 *   cubo(3)                                                 -> 27
 *   exponenciacao(2, 5)                                     -> 32
 *
 * Dica: exponenciacao pode calcular-se com um ciclo que multiplica
 * x por si próprio, exp vezes (ou reaproveitando a lógica do cubo,
 * generalizada).
 */
