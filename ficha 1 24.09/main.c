#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float numR;
    printf("inserir num. Real:\n");
    scanf("%f",&numR);
    printf("a)",numR);
    printf("%0.4f\n",numR);
    return 0;

}

/*E10
float num1, num2;
  char operacao;
  printf("inserir operacao\n");
  scanf("%f%c%f", &num1, &operacao, &num2);
  switch (operacao) {\s
  case '+':
    printf("%f\n", num1 + num2);
    \\\\\\
  case '-':
    printf("%f\n", num1 - num2);
    break;
  case '*':
  case 'x':
  case 'X':
    printf("%.3f\n", num1 * num2);
    break;
  case '/':
  case ':':
    if (num2 != 0) {
      printf("%.3f\n", num1 / num2);
    } else {
      printf("NÃO SE PODE DIVIDIR POR 0!\n");
    }
    break;
  default:
    printf("OPERADOR INVALIDO!\n");
  }
*/

/*E14
*/
