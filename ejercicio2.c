#include <stdio.h>

int main()
{
  char nombre[20];
  int edad;
  float asignacion_mensual, deducciones_mensuales, sueldo_neto, sueldo_quincenal, sueldo_semanal;

  printf("Ingrese su nombre: ");
  scanf("%s", &nombre);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("Ingrese su asignacion mensual: ");
  scanf("%f", &asignacion_mensual);

  printf("Ingrese su deducciones mensuales: ");
  scanf("%f", &deducciones_mensuales);

  sueldo_neto = asignacion_mensual - deducciones_mensuales;

  sueldo_quincenal = sueldo_neto / 2;

  sueldo_semanal = sueldo_neto / 4;

  printf("\nNombre: %s\nSueldo neto: %0.2f\nSueldo quincenal: %0.2f\nSueldo semanal: %0.2f", nombre, sueldo_neto, sueldo_quincenal, sueldo_semanal);

  return 0;
}