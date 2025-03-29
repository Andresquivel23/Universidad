#include <stdio.h>

int main()
{
  char nombre[20];
  int edad;
  float nota1, nota2, nota3, promedio;

  printf("Ingrese su nombre: ");
  scanf("%s", &nombre);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("1: Ingrese su nota: ");
  scanf("%f", &nota1);

  printf("2: Ingrese su nota: ");
  scanf("%f", &nota2);

  printf("3: Ingrese su nota: ");
  scanf("%f", &nota3);

  promedio = (nota1 + nota2 + nota3) / 3;

  printf("Nombre: %s\nPromedio: %0.2f", nombre, promedio);

  return 0;
}