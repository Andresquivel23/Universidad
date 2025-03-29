#include <stdio.h>

int main()
{
  float n1, n2, n3, n4, n5;

  printf("1: Ingrese un numero: ");
  scanf("%f", &n1);

  printf("2: Ingrese un numero: ");
  scanf("%f", &n2);

  printf("3: Ingrese un numero: ");
  scanf("%f", &n3);

  printf("4: Ingrese un numero: ");
  scanf("%f", &n4);

  printf("5: Ingrese un numero: ");
  scanf("%f", &n5);

  float suma = n1 + n2 + n3 + n4 + n5;
  printf("La suma de todos es: %.2f\n", suma);

  float resta = n1 - n2 - n3 - n4 - n5;
  printf("La resta de todos es: %.2f\n", resta);

  float multiplicacion = n1 * n2 * n3 * n4 * n5;
  printf("La multiplicacion de todos es: %.2f\n", multiplicacion);

  return 0;
}
